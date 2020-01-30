//
//  main.c
//  LabSessionsC
//
//  Created by PlugN on 30/01/2020.
//  Copyright © 2020 Groupe MINASTE. All rights reserved.
//

#include "main.h"

int moy3(int a, int b, int c) {
    return (a+b+c)/3;
}

int main(int argc, const char * argv[]) {
    
    int i;
    i = 10;
    
    if (i == 20 || 30) {
        printf("True\n");
    } else {
        printf("False");
    }
    
    switch (i) {
        case 2:
            printf("yo");
            break;
        case 4:
            printf("Wow");
        case 7:
            printf("Unbelievable");
        case 10:
            printf("Amazing\n");
        case 43:
            printf("Uh oh\n");
            
        default:
            break;
    }
    
    int count;
    count = 1;
    
    while (count <= 10) {
        printf("%d\n", count);
        count++;
    }
    
    int r, j, k;
    r = 3;
    j = 2 * (r++);
    // j = 6 et r = 4
    k = 2 * (++r);
    //
    
    printf("i = %d, j = %d, k = %d\n", r, j, k);
    
    for (i = 9; i > 10; i = i-2) {
        printf("\n %d", i);
    }
    
    i = 0;
    
    do {
        --i;
        printf("%d\n", i);
        i++;
    } while (i > 0);
    
    printf("%d\n", moy3(3, 6, 9));
    
    return 0;
}
