//
//  Allocate.hpp
//  MallocReplacement
//
//  Created by Katie Rose on 3/13/20.
//  Copyright © 2020 MSD Katie Rose. All rights reserved.
//

#ifndef MemoryManager_hpp
#define MemoryManager_hpp

#include <stdio.h>
#include <sys/mman.h>
#include "HashMap.hpp"
using namespace std;

class MemoryManager {

    HashMap hashMap;
public:
    void* allocate(size_t bytesToAllocate);
    void deallocate(void* ptr);
    void printHashTable();
};
#endif

