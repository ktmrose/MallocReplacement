# MallocReplacement

TLDR: Practice for using syscalls to manually manage memory (without using the OS library functions malloc() and free()).

In this assignment for my Operating Systems class, I used the system calls for manually allocating/deallocating virtual memory from the OS to implement the library functions malloc() and free(). In other words, I wrote replacements for malloc and free.

When a user asks MemoryManager to allocate, MemoryManager allocates memory using the mmap system call, which deals in units of pages. It forwards calls to free to munmap. Unfortunately, free doesn't take the allocation size as a parameter, so I stored allocation sizes in a hash map that fits into some memory that can be unsed to mmap.

Full disclaimer: this allocator is pretty "dumb". I haven't officially timed this for performance, but I anticipate it is about 10x slower than the standard library malloc, and also waste memory, but it should work as a drop in replacement!
