#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int jour;
    int mois;
    int annee;
} Date;


typedef struct
{
    char libelle[30];
    int code;
    Date datePeremption;
    float prix;
    int qteStock;
} Article;

typedef struct
{
    int nbArt; // nombres d'articles
    Article listeArticles[100]; // tableau contenant les articles
    float prixStock;
} Magasin;

void lireDate(Date* d)
{
    printf("entrez le jour : ");
    scanf("%d", &(d->jour));
    printf("entrez le mois : ");
    scanf("%d", &(d->mois));
    printf("entrez l'annee : ");
    scanf("%d", &(d->annee));
}

void afficherDate(Date date){
    printf("%d/%d/%d", date.jour, date.mois, date.annee);
}

void lireArticle(Article*a)
{
    printf("saisir le libelle : ");
    scanf("%s", (a->libelle));

    printf("saisir le code : ");
    scanf("%d", &(a->code));

    printf("saisir la date de peremption : ");
    lireDate(&(a->datePeremption));

    printf("saisir le prix : ");
    scanf("%f", &(a->prix));

    printf("saisir la quantite de stock : ");
    scanf("%d", &(a->qteStock));
}


void lireTabArticles(Magasin*Auchan, int qte)
{
    int i;
    for (i = 0; i < qte; i++)
    {
        lireArticle(&Auchan->listeArticles[i]);
    }
}

void afficherTabArticle(Magasin Auchan, int qte)
{
    int i;
    for (i = 0; i < qte; i++)
    {
        printf("%s, %d, %0.2f, ", Auchan.listeArticles[i].libelle, Auchan.listeArticles[i].code, Auchan.listeArticles[i].prix);
        afficherDate(Auchan.listeArticles[i].datePeremption);
        printf("\n");
    }
}

int maintest()
{
    Magasin Auchan;
    int qte;
    printf("entrez le nombre d'articles : ");
    scanf("%d", &qte);
    lireTabArticles(&Auchan, qte);
    afficherTabArticle(Auchan, qte);
    return 0;
}
