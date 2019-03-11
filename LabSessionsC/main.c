//
//  main.c
//  LabSessionsC
//
//  Created by PlugN on 28/01/2019.
//  Copyright © 2019 Groupe MINASTE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void TD1(){
    char str[20], rev[20];
    int i;
    printf("Enter a word : ");
    scanf("%s", str);
    for(i=0; i < strlen(str); i++){
        rev[i] = str[strlen(str)-1-i];
    }
    rev[i] = '\0';
    printf("The reverse of %s is %s\n", str, rev);
    
    char compare[20];
    printf("Enter another word : ");
    scanf("%s", compare);
    
    if (strcmp(compare, str) == 0){
        printf("The two words match!\n");
    } else {
        printf("The two words do not match...\n");
    }
    return;
}

void TD2(){
    // Write a function to take 2 sorted arrays and create a third sorted array out of the fusion of the two first.
    
    return;
    
}

void TD3(){
    // Linked lists with Arrays
    
    // Declare an empty array
    
    
    
    return;
}

void TD4(){
    
    return;
}

void C5(){
    
    return;
}

void C4(){
    // realloc() and malloc()
    //int array[100][100];
    
    int Lig, Col,i,j; int **T;
    // Declaration of the lines, columns, counter for the lines, -- for the columns, and the dynamic pointer of the Array of integers
    
    do{
        printf("Introduce number of lines\n");
        scanf("%d",&Lig);
    } while(Lig<=0);
    // We want a positive number of lines
    
    do{
        printf("Introduce number of columns\n");
        scanf("%d",&Col);
    } while(Col<=0);
    // We want a positive number of columns
    
    T=(int **)malloc(Lig*sizeof(int*));
    // T becomes an Array that is as big as the number of lines * the size of an integer (as the type is integer)
    
    for(i=0;i<Lig;i++){
        T[i]=(int *) malloc(Col*sizeof(int));
    }
    // The array is created, so we create a sub-array for each lines with the size of the columns * the size of an ìnteger (as the columns are also integers)
    
    for(i=0;i<Lig;i++){
        for(j=0;j<Col;j++){
            T[i][j]=i*Col+j;
        }
    }
    // This function fills each line with the columns but using the form of Arary[1D][2D] -> counter i * column number + j
    // Example : 0*25+0 / 0*25+1 / 0*25+2 ... | NEW LINE | ... / 1*25+2 / ... | NEW LINE| ... / 2*25+6 ... etc.
    
    for(i=0;i<Lig;i++) {
        for(j=0;j<Col;j++){
            printf("%d ",T[i][j]);
        }
        printf("\n");
    }
    // Same operation but this time it prints the output as always
    
    for(i=0;i<Lig;i++) free(T[i]);{
        free(T);
    }
    return;
    
}

void C3(){
    int x=5, y=2, z=3;
    int *ptr1 = NULL, *ptr2 = NULL;
    int **ptr3 = NULL;
    *ptr1 = 23;
    ptr1 = &x;
    *ptr3 = ptr2;
    ptr3 = &ptr1;
    ptr2 = &y;
    z = *ptr1*(*ptr2)++***ptr3;
    printf("%d %d %d %d %p %d %p %d\n", x,y,z,*ptr1,ptr1,*ptr2,ptr2,**ptr3);
    return;
}

void C2(){
    int array[20][20];
    int i = 0;
    int nb = 0;
    int rw = 0;
    
    printf("How many numbers per row?");
    scanf("%d", &nb);
    printf("How many rows?");
    scanf("%d", &rw);
    printf("Enter in a row your selection.");
    int se = 0;
    
    while (i > nb){
        scanf("%d", &se);
        array[0][i] = se;
    }
    return;
}

void C1(){
        // Two methods : 1 - Progressively swap tbe neighbor values until the array is sorted. (you can use a bool set to false by default and changed to true everytime a swap is made in order to know when you don't need to continue => when the bool is set to false after the loop)
        // 2 - Progressively swap the minimum value between i and the rest of the array until you reach the end.
    
        // The type String does not exist : it is an array of characters (char something[100] = "Hello";), and it has a dedicated '\0' character at the end so when you create the array, make sure that you have always at least one extra space for that character placed automatically by the compiler.
    char str[20];
    int i = 0;
    printf("Enter a word : ");
    scanf("%s", str);
    while (str[i] != '\0'){
        i++;
        printf("++\n");
    }
    printf("Number of characters : %d\n", i);
    
    return;
}

void LS1(){
    return;
}

void LS2(){
    //printf("Menu for LS2:\n 1 - TD1\n 2 - Course 1\n 3 - Course 2\n 4 - Course 3\n 5 - Course 4\n 6 - LabSession 1\n ");
    
    int i;
    for (i=0; i<5; i++) {
        printf("#");
    }
    for (i=0; i<2; i++) {
        printf("\n#");
    }
    for (i=0; i<4; i++) {
        printf("#");
    }
    for (i=0; i<3; i++) {
        printf("\n#");
    }
    
    printf("\n");
    
    srand(time(NULL));
    
    int number = rand() % 10000;
    printf("%d", number);
    int found = 0;
    while (found != 1){
        int guess;
        printf("\nGuess the number: ");
        scanf("%d", &guess);
        if (guess > number){
            printf("The guess is too high");
        }
        if (guess < number){
            printf("The guess is too low");
        }
        if (guess == number){
            printf("You guessed it!");
            found = 1;
        }
    }
    
    return;
}


int main(int argc, const char * argv[]) {
    int choice = 0;
    printf("Main menu:\n 1 - TD1\n 2 - Course 1\n 3 - Course 2\n 4 - Course 3\n 5 - Course 4\n 6 - LabSession 1\n 7 - LabSession 2\n> ");
    scanf("%d", &choice);
    switch (choice) {
        case 0:
            printf("Something wrong happened.");
            break;
        case 1:
            TD1();
            break;
        case 2:
            C1();
            break;
        case 3:
            C2();
            break;
        case 4:
            C3();
            break;
        case 5:
            C4();
            break;
        case 6:
            LS1();
            break;
        case 7:
            LS2();
            break;
            
        default:
            printf("Something wrong happened.");
            break;
    }
    return 0;
}

