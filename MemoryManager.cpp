//
//  Allocate.cpp
//  MallocReplacement
//
//  Created by Katie Rose on 3/13/20.
//  Copyright © 2020 MSD Katie Rose. All rights reserved.

#include "MemoryManager.hpp"

using namespace std;

size_t roundUpTo4096Mult(size_t number) {
    
    int remainder = number % 4096;
    if (remainder == 0)
        return number;
    return number + 4096 - remainder;
}

void* MemoryManager::allocate(size_t bytesToAllocate) {
    
    void* emptyAllocatedMemory = mmap(nullptr, bytesToAllocate, PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0);
    if (emptyAllocatedMemory == MAP_FAILED){
        perror("mmap");
    }
    
    hashMap.addAllocatedMemory(emptyAllocatedMemory, roundUpTo4096Mult(bytesToAllocate));
    return emptyAllocatedMemory;
}

void MemoryManager::deallocate(void* ptr) {
    
    munmap(ptr, hashMap.allocatedMemory.size);
    hashMap.deleteAllocatedMemory(ptr);
}

void MemoryManager::printHashTable() {
    
}
