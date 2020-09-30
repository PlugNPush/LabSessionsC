Structure Arbre
    val: Int
    l: *Arbre
    r: *Arbre
Fin Structure

Fonction nbE(a: Adresse d'Arbre): Int
Début
    Si a != null:
        retourner 1 + nbE(a->l) + nbE(a->r)
    Sinon:
        retourner 0
    Fin Si
Fin


Fonction whE(a: Adresse d'Arbre, r: Int): Bool
Début
    Si a != null:
        Si a->val = r:
            retourner vrai
        Sinon:
            retourner (whE(a->l, r) || whE(a->r, r))
        Fin Si
    Sinon:
        retourner faux
    Fin Si
Fin

Fonction m2(a: Adresse d'Arbre)
Début
    Si a != null:
        a->val <- ((a->val)*2)
        m2(a->l)
        m2(a->r)
    Fin Si
Fin

Fonction pr(a: Adresse d'Arbre)
!Fonction synchrone!
Début
    Si a != null:
        pr(a->l)
        pr(a->r)
        Afficher (a->val)
    Fin Si
Fin

Fonction sp(a: Adresse d'Arbre)
!Fonction synchrone!
Début
    Si a != null:
        sp(a->l)
        sp(a->r)
        free(a)
    Fin Si
Fin




Partie 2

Fonction cr(e: Int): Adresse d'Arbre
Début
    Allocation a <- Adresse d'Arbre
    Si (e%2 != 0 ? e-1/2 : e/2) > 1:
        Si e%2 = 0:
            a->l = cr(e-1)
            a->r = cr(e-2)
        Sinon:
            a->r = cr(e-1)
            a->l = cr(e-2)
    Sinon:
        retourner a
    Fin Si
Fin
