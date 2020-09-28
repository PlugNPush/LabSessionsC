//
//  main.c
//  LabSessionsC
//
//  Created by PlugN on 7.9.20..
//  Copyright © 2020 Groupe MINASTE. All rights reserved.
//

#include "main.h"
#include "string.h"

int main(int argc, char * argv[]) {
    int i, j, k;
    char A[200], B[200];
    printf("Saisir: ");
    j = 0;
    k = strlen(A);
    
    for(i = k-1; i >= 0; i--){
        B[j++] = A[i];
    }
    
    B[i] = '\0';
    printf("%s", B);
    
    return 0;
}
