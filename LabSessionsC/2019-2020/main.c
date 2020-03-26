//
//  main.c
//  LabSessionsC
//
//  Created by PlugN on 16/03/2020.
//  Copyright © 2020 Groupe MINASTE. All rights reserved.
//

#include "main.h"

int* create_array(int size) {
    int* tab = (int*) malloc(size * sizeof(int));
    if (tab == NULL) {
        exit(EXIT_FAILURE);
    }
    return tab;
}

void create_array_bis(int ** A, int size) {
    *A = (int*) malloc(size * sizeof(int));
    if (A == NULL) {
        exit(EXIT_FAILURE);
    }
}

void fill_array(int* A, int nb) {
    int i;
    for (i=0; i<nb; i++) {
        printf("Saisir la valeur %d/%d: ", i+1, nb);
        scanf("%d", A+i);
        fflush(stdin);
    }
}

void disp_array(int* A, int nb) {
    int i;
    printf("[ ");
    for (i=0; i<nb; i++) {
        printf("%d ", A[i]);
    }
    printf("]");
}



int** create_2darray(int L, int C) {
    int** tab = (int**) malloc(L * sizeof(int));
    int i;
    for (i=0; i<L; i++) {
        tab[i] = (int*) malloc(C * sizeof(int));
    }
    if (tab == NULL) {
        exit(EXIT_FAILURE);
    }
    return tab;
}

void create_2darray_bis(int*** A, int L, int C) {
    *A = (int**) malloc(L * sizeof(int *));
    if (*A == NULL) {
        exit(EXIT_FAILURE);
    }
    int i;
    for (i=0; i<L; i++) {
        (*A)[i] = (int*) malloc(C * sizeof(int));
        if ((*A)[i] == NULL) {
            exit(EXIT_FAILURE);
        }
    }
}

void fill_2darray(int** A, int L, int C) {
    int i, j;
    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            printf("Saisir la valeur [%d/%d][%d/%d]: ", i+1, L, j+1, C);
            scanf("%d", &A[i][j]);
            fflush(stdin);
        }
    }
}

void disp_2darray(int** A, int L, int C) {
    int i, j;
    for (i=0; i<L; i++) {
        printf("[ ");
        for (j=0; j<C; j++) {
            printf("%d ", A[i][j]);
        }
        printf("]\n");
    }
    
}





// TP DE C

void sum(int a, int b, int* c) {
    *c = a+b;
}

void perm(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void puiss(int a, int* p2, int* p3) {
    *p2 = a*a;
    *p3 = a*a*a;
}

int main(int argc, const char * argv[]) {
    
    int a = 3, b = 5;
    int c = 0;
    printf("AVANT : a = %d, b = %d, c = %d\n", a, b, c);
    sum(a, b, &c);
    perm(&a, &b);
    printf("APRÈS : a = %d, b = %d, c = %d\n", a, b, c);
    int p2 = 0, p3 = 0;
    puiss(a, &p2, &p3);
    printf("Avec a = %d, carré = %d, cube = %d\n", a, p2, p3);
    
    
    int* t = create_array(10);
    printf("%d\n", t[5]); // expecting any integer
    
    int* A = NULL;
    create_array_bis(&A, 10);
    printf("%d\n", A[3]); // expecting any integer
    
    //fill_array(A, 5);
    printf("\n");
    disp_array(A, 5);
    
    printf("\n\n");
    free(t);
    free(A);
    
    int** tab = create_2darray(10, 10);
    printf("%d\n", tab[5][2]); // expecting any integer
    
    int** B = NULL;
    create_2darray_bis(&B, 10, 10);
    printf("%d\n", tab[5][2]); // expecting any integer
    
    fill_2darray(B, 3, 3);
    printf("\n");
    disp_2darray(B, 3, 3);
    
    printf("\n\n");
    free(tab);
    free(B);
    
    return 0;
}

