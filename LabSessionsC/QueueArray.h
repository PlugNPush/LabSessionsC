//
//  QueueArray.h
//  LabSessionsC
//
//  Created by PlugN on 18/04/2019.
//  Copyright © 2019 Groupe MINASTE. All rights reserved.
//

#ifndef QueueArray_h
#define QueueArray_h

#include <stdio.h>

/* definition of a Queue */
typedef struct {
    int * Qu;
    int size;
    int in;
    int out;
}Queue;
void initQueueArray(Queue*, int);
void pushQueueArray(Queue*, int );
int popQueueArray(Queue*, int *);
void displayQueueArray(Queue*);

#endif /* QueueArray_h */
