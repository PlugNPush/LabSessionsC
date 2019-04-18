//
//  StackArray.c
//  LabSessionsC
//
//  Created by PlugN on 18/04/2019.
//  Copyright © 2019 Groupe MINASTE. All rights reserved.
//

#include "StackArray.h"

    //– Create a CheckStackArray.c file where you propose a menu allowing the user to manipulate a Stack

void initStackArray(Stack* stack, int number){
    stack->size = 0;
    stack->top = number;
    stack->St = &number;
}
