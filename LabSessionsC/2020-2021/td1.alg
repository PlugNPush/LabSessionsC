1.1


Fonction: parcourirListe(l: la liste structurée val: Int et next: ElemListe): Entier

Début
    Si l = null:
        i <- 0
    Sinon:
        elem <- l.val
        suiv <- l.next
        i <- 1
        Tant que suiv != null:
            elem <- suiv.val
            suiv <- suiv.next
            i <- i+1
        Fin tant que
    Fin si
    retourner i
Fin

Fonction: parcourirListeRecurs(elem: int, suiv: ElemListe): Entier

Début
    (On donne en argument le premier element et le suivannt)
    Si suiv != null:
        elem <- suiv.val
        suiv <- suiv.next
        Retourner 1 + parcourirListeRecurs(elem, suiv)
    Sinon:
        Retourner 0
    Fin tant que
Fin


1.2

Fonciton: whereIs(l: liste, e: int): Entier
Début
    Si l = null:
        i <- -1
    Sinon:
        elem <- l.val
        suiv <- l.next
        i <- 0
        Tant que suiv != null:
            Si elem = e:
                retourner i;
            Fin si
            elem <- suiv.val
            suiv <- suiv.next
            i <- i+1
        Fin tant que
    Fin si
    retourner -1
Fin



