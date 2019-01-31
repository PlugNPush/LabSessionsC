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
   
    
    return 0;
}
