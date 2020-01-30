//
//  QueueLL.h
//  LabSessionsC
//
//  Created by PlugN on 18/04/2019.
//  Copyright © 2019 Groupe MINASTE. All rights reserved.
//

#ifndef QueueLL_h
#define QueueLL_h

#include <stdio.h>

/* File QueueLL.h */
/* Definition of an element */
typedef struct elt
{
    int val;
    struct elt * next;
}Elt;
/* definition of a Queue */
typedef struct {
    Elt * first;
    Elt * last;
}Queue;
void initQueueLL(Queue*);
void pushQueueLL(Queue*, Elt *);
Elt* popQueueLL(Queue*);
void displayQueueLL(Queue);

#endif /* QueueLL_h */
