//
//  main.c
//  LabSessionsC
//
//  Created by PlugN on 05/03/2020.
//  Copyright © 2020 Groupe MINASTE. All rights reserved.
//

#include "main.h"

void echange(int *a, int *b);
void action(void);

void echange(int *a, int *b) {
    int save;
    save = *a;
    *a = *b;
    *b = save;
}

void action() {
    int x = 5, y = 10;
    printf("Avant échange, x = %d et y = %d\n", x, y);
    echange(&x, &y);
    printf("Après échange, x = %d et y = %d\n", x, y);
}

int somme(int count, ...){
    va_list list;
    int j = 0;
    int sum = 0;

    va_start(list, count);
    for(j=0; j<count; j++) {
        sum += va_arg(list, int);
    }

    va_end(list);

    return sum;
    }



int main(int argc, const char * argv[]) {
    
    action();
    printf("\nSomme de 2, 6, 7, 23, 64, 13, 543, 23 = %d\n\n", somme(8, 2, 6, 7, 23, 64, 13, 543, 23));
    
    int choice = 90;
    
    while (choice != 0) {
        
        printf("Welcome. Chose one option to start.\n1 - Remplir un tableau\n2 - Minimum\n3 - Moyenne\n4 - Recherche\n5 - Ajouter\n6 - Fusion\n7 - Pointeurs\n8 - Copy str\n9 - MAJ\n10 - Palindrome\n11 - Nombre de mots0 - Exit\n");
        
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
        else if (choice == 7) {
            int A = 1;
            int B = 2;
            int C = 3;
            int *p1, *p2;
            p1 = &A;
            p2 = &C;
            *p1 = (*p2)++;
            p1 = p2;
            p2 = &B;
            *p1 = *p2;
            ++*p2;
            *p1 *= *p2;
            A =++*p2**p1;
            p1 = &A;
            *p2 = *p1 /= *p2;
            
            
            int tab[5];
            tab[0] = 10;
        }
        else if (choice == 8) {
            char a[100] = "WOOOOOOOOOOOOOOOOOOW";
            char b[100];
            int i;
            
            for (i=0; i<100; i++) {
                b[i] = a[i];
            }
            printf("%s\n", b);
        }
        else if (choice == 9) {
            char a[100] = "woR4DC:=;EZsnbhjbsFn RDsbdyeiuksFRSn bfjke()!!!:/,slfb SDFGdbhur32";
            char b[100];
            int i;
                       
            for (i=0; i<100; i++) {
                if (a[i] >= 'a' && a[i] <= 'z') {
                    b[i] = a[i] - ' ';
                } else {
                    b[i] = a[i];
                }
                
            }
            printf("%s\n", b);
        }
        else if (choice == 10) {
            char a[100] = "lolu";
            int i = 0, pos = 0, found = 0, pal = 1, j = 0;
            
            while (found == 0) {
                if (a[i] == '\0') {
                    pos = i;
                    found = 1;
                }
                i++;
            }
            
            for (i=pos-1; i > 0; i--) {
                if (a[j++] != a[i]) {
                    pal = 0;
                }
            }
            
            if (pal == 1) {
                printf("%s est un palindrome.\n", a);
            } else {
                printf("%s n'est pas un palindrome.\n", a);
            }
            
        }
        else if (choice == 11) {
            char a[100] = "lolu";
            int i = 0, pos = 0, found = 0;
            
            while (found == 0) {
                if (a[i] == '\0') {
                    pos = i;
                    found = 1;
                }
                i++;
            }
            
            // COMPTER LE NBR DE MOTS
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
