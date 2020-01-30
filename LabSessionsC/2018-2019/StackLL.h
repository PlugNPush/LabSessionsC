//
//  StackLL.h
//  LabSessionsC
//
//  Created by PlugN on 18/04/2019.
//  Copyright © 2019 Groupe MINASTE. All rights reserved.
//

#ifndef StackLL_h
#define StackLL_h

#include <stdio.h>

/* File StackLL.h */
/* Definition of an element */
typedef struct elt
{
    int val;
    struct elt * next;
}Elt;
/* Definition of a Stack */
typedef Elt * Stack;
/* Operations on Stack */
void initStackLL(Stack*);
void pushStackLL(Stack*, Elt *);
Elt * popStackLL(Stack*);
void displayStackLL(Stack);

#endif /* StackLL_h */
