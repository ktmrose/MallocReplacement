//
//  main.cpp
//  MallocReplacement
//
//  Created by Katie Rose on 3/13/20.
//  Copyright © 2020 MSD Katie Rose. All rights reserved.
//

#include <iostream>
#include <string.h>
#include "MemoryManager.hpp"

int main(int argc, const char * argv[]) {
    
    MemoryManager memoryManager;
    
    const char* test = "This is a test";
    char* testPtr = (char*) memoryManager.allocate(sizeof(test));
    strcpy(testPtr, test);
    cout << testPtr << endl;
    memoryManager.deallocate(testPtr);
    
    //deallocate works when the line below throws BAD_ACCESS error
//    strcpy(testPtr, test);
//    cout << testPtr << endl;
    return 0;
}
