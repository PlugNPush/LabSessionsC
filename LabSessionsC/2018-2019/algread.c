//
//  algread.c
//  LabSessionsC
//
//  Created by PlugN on 08/04/2019.
//  Copyright © 2019 Groupe MINASTE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void executeAlgorithm(){
FILE *g = fopen("/Users/plugn/Documents/LabSessionsC/LabSessionsC/Base.lproj/main.alg", "r");

    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    
    while ((read = getline(&line, &len, g)) != -1) {
        //printf("Retrieved line of length %zu:\n", read);
        printf("%s", line);
    }

fclose(g);
}

int mainRK(){
    printf("Ready.");
    executeAlgorithm();
    return 0;
}
