fonction nom_fonction(param1: type_param1, param2: type_param2, ..., paramn: type_paramn):type de retour (ou rien)

(paramètres / données) copiées : .....
(paramètres / données) modifiées : ....
Variables locales : ....

Début

    .....
    .....
    .....
    .....

Fin



fonction moyenne3(a, b, c: entiers):entier
Données copiées : a, b, c

Début
    retourner (a+b+c)/3
Fin




EX 1 :

Nombre de caractères dans une chaîne ?

Fonction nbchar(l: chaîne de caractères, t: taille)
---> Problème ? Taille déjà donnée ? retourner t directement ?

Réponse au TD suivant !

---------

EX 0 :

Chercher une valeur dans un tableau et si elle existe, afficher sa position, sinon -1

EX 00 :

Écrire une fonction qui insère un élément dans un tableau ordonné.


EX 0 :

Fonction val(t: tableau d'entiers, taille: entier, val: entier)
Données copiéees : t, taille, val
variable locale : i: entier

Début
    Pour i <- 0 jusqu'à i = taille faire:
        Si t[i] = val alors faire:
            retorner i
        Fin si
    Fin pour
    retourner -1
Fin

