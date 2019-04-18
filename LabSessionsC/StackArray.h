//
//  StackArray.h
//  LabSessionsC
//
//  Created by PlugN on 18/04/2019.
//  Copyright © 2019 Groupe MINASTE. All rights reserved.
//

#ifndef StackArray_h
#define StackArray_h

#include <stdio.h>

/* File StackArray.h */
/* Definition of a Stack */
typedef struct {
    int *St;
    int size;
    int top;
}Stack;
/* Operations on Stack */
void initStackArray(Stack*, int);
void pushStackArray(Stack*, int );
int popStackArray(Stack*, int *);
void displayStackArray(Stack*);


#endif /* StackArray_h */
