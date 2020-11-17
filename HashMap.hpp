//
//  HashMap.hpp
//  MallocReplacement
//
//  Created by Katie Rose on 3/20/20.
//  Copyright © 2020 MSD Katie Rose. All rights reserved.
//

#ifndef HashMap_hpp
#define HashMap_hpp

#include <stdio.h>

class HashMap {
public:
    struct {
        void* ptr;
        size_t size;
        bool isFull;
    } allocatedMemory;
    
    HashMap();
    void addAllocatedMemory(void* ptr, size_t size);
    void deleteAllocatedMemory(void* ptr);
};
#endif /* HashMap_hpp */
