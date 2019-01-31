//
//  main.c
//  LabSessionsC
//
//  Created by PlugN on 28/01/2019.
//  Copyright © 2019 Groupe MINASTE. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
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
    
    return 0;
}
