//
//  main.c
//  LabSessionsC
//
//  Created by PlugN on 16/03/2020.
//  Copyright © 2020 Groupe MINASTE. All rights reserved.
//

#include "main.h"

int** init_tab(int L, int C) {
    int** T = (int**) malloc(L * sizeof(int *));
    int i;
    for (i=0; i<L; i++) {
        T[i] = (int*) malloc(C * sizeof(int));
    }
    if (T == NULL) {
        exit(EXIT_FAILURE);
    }
    
    int j;
    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            T[i][j] = 0;
        }
    }
    
    return T;
}

int mainEXO4(int argc, char * argv[]) {
    int L = 5, C = 8;
    int** T = init_tab(L, C);
    int i, j;
    for (i=0; i<L; i++) {
        printf("[ ");
        for (j=0; j<C; j++) {
            printf("%d ", T[i][j]);
        }
        printf("]\n");
    }
    
    return 0;
}



int estOrdonne(int tab[], int taille) {
    if (taille <= 0) {
        return -1;
    }
    int ord = tab[0];
    int i;
    for (i=1; i<taille; i++) {
        if (tab[i] < ord) {
            return 0;
        }
        ord = tab[i];
    }
    return 1;
    
}


int mainEXO3(int argc, char * argv[]) {
    int tableauT1[] = {2, 5, 7, 23, 54, 76, 233, 435, 653, 764, 872, 910, 993, 1049};
    int tailleT1 = 14;
    int tableauT2[] = {3, 6, 7, 23, 76, 65, 12, 25};
    int tailleT2 = 8;
    
    printf(estOrdonne(tableauT1, tailleT1) == 1 ? "Le tableau T1 est ordonné\n" : "Le tableau T1 n'est pas ordonné\n");
    printf(estOrdonne(tableauT2, tailleT2) == 1 ? "Le tableau T2 est ordonné\n" : "Le tableau T2 n'est pas ordonné\n");
    return 0;
}




int pgcd(int a, int b) {
    if (a == b) {
        return a;
    } else if (a>b) {
        return pgcd(a-b, b);
    } else if (a<b) {
        return pgcd(a, b-a);
    } else {
        return -1; // Ce code n'a pas de raison d'être appelé, mais c'est une sécurité supplémentaire.
    }
}

int mainEX2(int argc, char * argv[]) {
    int a = 45, b = 25;
    printf("Le PGCD de %d et %d est %d.\n", a, b, pgcd(a, b));
    
    return 0;
}



int mainEX1(int argc, char * argv[]) {
    int nba;
    printf("Please enter the first number: ");
    scanf("%d", &nba);
    int nbb;
    printf("Please enter the second number: ");
    scanf("%d", &nbb);
    int nbc;
    printf("Please enter the third number: ");
    scanf("%d", &nbc);
    fflush(stdout);
    int minimum;
    if (nba < nbb) {
        minimum = nba;
        if (nbb > nbc) {
            if (nbc > nba) {
                minimum = nba;
            } else {
                minimum = nbc;
            }
        } else {
            if (nbb > nba) {
                minimum = nba;
            } else {
                minimum = nbb;
            }
        }
    } else {
        minimum = nbb;
        if (nba > nbc) {
            if (nbb > nbc) {
                minimum = nbc;
            } else {
                minimum = nbb;
            }
        } else {
            if (nba > nbb) {
                minimum = nbb;
            } else {
                minimum = nba;
            }
        }
    }
    printf("The minimum of these numbers is %d.\n", minimum);
    return 0;
}

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

int main26(int argc, const char * argv[]) {
    
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

struct Date{
    int month;
    int day;
    int year;
};
typedef struct Date Date;

typedef struct{
    char libelle[30];
    int code;
    Date datePeremption;
    float prix;
    int qteStock;
}Article;


void setDate(Date *d, int day, int month, int year){
    (*d).day = day;
    (*d).month = month;
    (*d).year = year;
}

void writeDate(Date date){
    printf("%d/%d/%d", date.day, date.month, date.year);
}

void readDate(Date *date) {
    printf("Enter the date MM/DD/YYYY:\n");
    scanf("%d/%d/%d", &date->month, &date->day, &date->year);
    fflush(stdin);
}


int compareDate(Date date, Date date2){
    
    // Comparer l'année
    if (date.year > date2.year){
        return 1;
    } else if (date.year < date2.year){
        return -1;
    }
    
    // Année identique
    else {
        // Comparer le mois
        if (date.month > date2.month){
            return 1;
        } else if (date.month < date2.month) {
            return -1;
        }
        
        // Mois identique
        else {
            // comparer le jour
            if (date.day > date2.day){
                return 1;
            } else if (date.day < date2.day){
                return -1;
            }
            
            // Jour identique, date identique
            else {
                return 0;
            }
        }
    }
}

void readArticle(Article* article) {
    printf("Saisir l'article comme suit :\nnom code prix quantité : ");
    scanf("%s %d %f %d", article->libelle, &article->code, &article->prix, &article->qteStock);
    fflush(stdin);
    readDate(&article->datePeremption);
    printf("\n");
}

typedef struct Magasin {
    Article* stock;
    int quantité;
    float prixStock;
}Magasin;

void initMagasin(Magasin* mag) {
    printf("Combien d'articles ? ");
    int qte;
    scanf("%d", &qte);
    mag->stock = (Article*) malloc(sizeof(Article) * qte);
    if (mag->stock == NULL) {
        exit(EXIT_FAILURE);
    }
    int i;
    for (i=0; i<qte; i++) {
        printf("Article %d\n", i+1);
        readArticle(&mag->stock[i]);
    }
    mag->quantité = qte;
    mag->prixStock = 0;
    for (i=0; i<qte; i++) {
        mag->prixStock += mag->stock[i].prix;
    }
}

void showArticles(Magasin mag) {
    int i;
    for (i=0; i<mag.quantité; i++) {
        printf("[ %s %d %.2f %d ", mag.stock[i].libelle, mag.stock[i].code, mag.stock[i].prix, mag.stock[i].qteStock);
        writeDate(mag.stock[i].datePeremption);
        printf(" ]\n");
    }
}

float priceArticles(Magasin mag) {
    int i;
    float price = 0;
    for (i=0; i<mag.quantité; i++) {
        price += mag.stock[i].prix;
    }
    return price;
}

int expensive(Magasin mag) {
    int i, priceIndex;
    Article price = mag.stock[0];
    priceIndex = 0;
    for (i=1; i<mag.quantité; i++) {
        if (price.prix < mag.stock[i].prix) {
            price = mag.stock[i];
            priceIndex = i;
        }
    }
    return priceIndex;
}

void showMagasin(Magasin mag) {
    printf("Articles du magasin\n    Nom   Code  Prix Qté. Date d'exp.\n");
    showArticles(mag);
    printf("Quantité d'articles: %d\n", mag.quantité);
    printf("Prix total: %.2f", mag.prixStock);
}

int main545423(int argc, char * argv[]) {
    Magasin mag;
    initMagasin(&mag);
    showArticles(mag);
    printf("\n\n");
    showMagasin(mag);
    //printf("Le prix total est %.2f\n", priceArticles(mag));
    printf("\nL'article le plus cher est à la postion %d\n", expensive(mag));
    
    return 0;
}

int main642(int argc, char * argv[]) {
    Date d;
    readDate(&d);
    writeDate(d);
    
    return 0;
}

