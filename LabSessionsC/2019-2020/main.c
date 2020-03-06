//
//  main.c
//  LabSessionsC
//
//  Created by PlugN on 05/03/2020.
//  Copyright © 2020 Groupe MINASTE. All rights reserved.
//

#include "main.h"

int main(int argc, const char * argv[]) {
    
    int choice = 90;
    
    while (choice != 0) {
        
        printf("Welcome. Chose one option to start.\n1 - Remplir un tableau\n2 - Minimum\n3 - Moyenne\n4 - Recherche\n5 - Ajouter\n6 - Fusion\n0 - Exit\n");
        
        scanf("%d", &choice);
        printf("\n");
        
        if (choice == 1){
            int tab[100];
            printf("Combien de valeurs ? ");
            int val;
            scanf("%d", &val);
            for (int i=0; i<val; i++) {
                printf("Saisir valeur %d: ", i);
                scanf("%d", &tab[i]);
            }
            printf("tab = [");
            int i;
            for (i=0; i<val-1; i++) {
                printf("%d, ", tab[i]);
            }
            printf("%d", tab[++i]);
            printf("]\n");
            
        }
        else if (choice == 2){
            int tab[] = {54, 64, 23, 66, 2463, 24, 75, 235, 1, 678, 4346, 43, 75};
            int i, min;
            min = tab[0];
            for (i=1; i<13; i++) {
                if (tab[i] < min) {
                    min = tab[i];
                }
            }
            printf("minimum : %d", min);
            
        }
        else if (choice == 3){
            int tab[] = {54, 64, 23, 66, 2463, 24, 75, 235, 1, 678, 4346, 43, 75};
            int i;
            float moy;
            for (i=0, moy = 0; i<13; i++) {
                moy += tab[i];
            }
            moy = moy/13;
            printf("moyenne : %f", moy);

        }
        else if (choice == 4){
            int tab[] = {54, 64, 23, 66, 2463, 24, 75, 235, 1, 678, 4346, 43, 75};
            int i, s, found;
            
            printf("Quelle valeur recherchez-vous? ");
            scanf("%d", &s);
            
            for (i=0, found = 0; i<13 && found == 0; i++) {
                if (s == tab[i]) {
                    printf("La position de %d est : %d\n", s, i);
                }
            }
        }
        else if (choice == 5){
            int tab[] = {1, 5, 6, 8, 24, 46, 256, 277, 350, 542, 3020};
            int i, s, ind;
            ind = 0;
            printf("Quelle valeur voulez-vous insérer? ");
            scanf("%d", &s);
            
            i = 0;
            while (tab[i] < s && i < 11) {
                ind = i++;
            }
            
            int newtab[100];
            
            if (ind == 0) {
                newtab[0] = s;
                for (i=0; i<11; i++) {
                    newtab[i+1] = tab[i];
                }
            } else {
                for (i=0; i <= ind; i++) {
                    newtab[i] = tab[i];
                }
                newtab[ind+1] = s;
                for (i=ind+1; i<11; i++) {
                    newtab[i+1] = tab[i];
                }
            }
            
            printf("tab = [");
            for (i=0; i<11; i++) {
                printf("%d, ", newtab[i]);
           }
           printf("%d", newtab[i++]);
           printf("]\n");
        }
        else if (choice == 6) {
            int t1[] = {1, 3, 5, 7, 9};
            int t2[] = {0, 2, 4, 6, 8, 10, 11, 12, 13, 14, 15};
            int t3[100];
            int tt1 = 5;
            int tt2 = 11;
            int i, j = 0;
            int ijind = 0;
            
            for (i = 0, j = 0; i < tt1 || j < tt2; (ijind) ? i++ : j++) {
                if (t1[i] < t2[j] && i < tt1) {
                    ijind = 1;
                    t3[i+j] = t1[i];
                } else if (j < tt2) {
                    ijind = 0;
                    t3[i+j] = t2[j];
                }
                else {
                    (ijind) ? j++ : i++;
                }
            }
            
            printf("tab = [");
            int r;
            for (r=0; r<i+j-1; r++) {
                printf("%d, ", t3[r]);
            }
            printf("%d", t3[r++]);
            printf("]\n");
            
        }
        
        
        else if (choice == 0) {
            printf("Bye!");
        }

        
        else {
            printf("Error on in the selection.");
        }
        
        printf("\n");
    }
    
    return 0;
}
