//
//  HashMap.cpp
//  MallocReplacement
//
//  Created by Katie Rose on 3/20/20.
//  Copyright © 2020 MSD Katie Rose. All rights reserved.
//

#include "HashMap.hpp"

HashMap::HashMap() {
    allocatedMemory.isFull = false;
}

void HashMap::addAllocatedMemory(void* ptr, size_t size) {
    
    allocatedMemory.ptr = ptr;
    allocatedMemory.size = size;
    if (size >= 4096) {
        allocatedMemory.isFull = true;
    }
}

void HashMap::deleteAllocatedMemory(void* ptr) {
    
    allocatedMemory.ptr = nullptr;
    allocatedMemory.size = 0;
    allocatedMemory.isFull = false;
}
