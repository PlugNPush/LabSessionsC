//
//  main.c
//  LabSessionsC
//
//  Created by PlugN on 13/02/2020.
//  Copyright © 2020 Groupe MINASTE. All rights reserved.
//

#include "main2.h"

int val(int t[], int taille, int value) {
    for (int i=0; i<taille; i++) {
        if (t[i] == value) {
            return i;
        }
    }
    return -1;
}

int ord(int t[], int taille, int value) {
    int i = 0;
    while (t[i] < value && i < taille) {
        i++;
    }
    return i;
}

int insert(int t[], int taille, int value) {
    int block = ord(t, taille, value);
    int i = 0;
    int tempt[100];
    for (i = 0; i < taille; i++) {
        tempt[i] = t[i];
    }
    t[block] = value;
    taille++;
    for (i=block+1; i < taille; i++) {
        t[i] = tempt[i-1];
    }
    return *t;
}

void main43() {
    int t[100] = {2,4,5,6,7,9,13,35,47,57,78,97};
    printf("[");
    for (int i=0; i<13; i++) {
        printf("%d, ", t[i]);
    }
    printf("]\n");
    printf("Position de %d : %d\n", 13, val(t, 12, 13));
    insert(t, 12, 3);
    printf("Nouvelle position de %d : %d\n", 13, val(t, 13, 13));
    
    printf("[");
    for (int i=0; i<13; i++) {
        printf("%d, ", t[i]);
    }
    printf("]\n");
}

void main54() {
    char test[1000];
    int i = 0;
    printf("Saisissez une chaîne");
    scanf("%s", test);
    for (i=0; test[i]; i++) {
        printf("Le nombre de caractères est %d", i);
    }
    
}

int main4(int argc, const char * argv[]) {
    //printf("Hello world!\n");
    main43();
    
    return 0;
}
