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

Fonciton: whereIsRecurs(elem: element, e: int, pos: int): Entier
Var locales: suiv: ADDR->element
Début
    Si elem = null:
        retourner -1
    Sinon:
        elem <- e.val
        suiv <- e.next
        Si suiv != nil:
            Si elem = e:
                Retourner pos
            Sinon:
                Retourner whereIsRecurs(elem, pos+1)
            Fin Si
        Sinon:
            Retourner -1
        Fin Si
    Fin si
    retourner -1
Fin


1.3

Fonction occurence(l: liste, e:int): Entier
Début
    Si l = null:
        i <- -1
    Sinon:
        i<-0
        elem <- l.val
        suiv <- l.next
        Tant que suiv != null:
            Si elem = e:
                i <- i+1
            Fin Si
            elem <- suiv.val
            suiv <- suiv.next
        Fin Tant Que
    Fin Si
Fin

Fonction occurenceRecurs(elem: element, e:int, c:int):Entier
Var Locales: suiv: ADDR->element
Début
    Si elem = null:
        retourner 0
    Sinon:
        Si elem->val = e:
            Retourner 1 + occurenceRecurs(elem->suiv, e, c)
        Sinon:
            Retourner occurenceRecurs(elem->suiv, e, c)
    Fin Si
Fin

1.4

Fonction somme(l: liste): Entier
Début
    Si l = nul:
        Retourner 0
    Sinon:
        i <- 0
        elem <- l.val
        suiv <- l.next
        Tant que suiv != nul:
            i <- i + elem
            elem <- suiv.elem
            suiv <- suiv.next
        Fin Tant que
        Retourner i
    Fin Si
Fin


1.5

Fonction croissant(l: liste): Booléen
Variables locales : pre: Int
Début
    Si l = null:
        retourner FAUX
    Sinon:
        pre <- l.elem
        suiv <- l.next
        Tant que suiv != null:
            Si suiv.elem < pre:
                Retourner FAUX
            Fin Si
        Fin Tant que
        Retourner VRAI
    Fin Si
Fin

2.1

Fonction ajouterElem(l: liste, e: int, pos: int)
Début
    Si l = null:
        l <- ALLOCATION_liste
        l.elem = e
        l.suiv = null
    Sinon:
        Si pos <= 0:
            newElement = ALLOCATION_liste
            newElement.elem = e
            newElement.next = l
            l <- newElement
        Sinon:
            elem <- l.val
            suiv <- l.next
            constructedList <- ALLOCATION_liste
            Pour i <- 1 allant jusqu'à i = pos OU suiv != nul avec i+1:
                constructedList.elem <- elem
                constructedList.suiv <- suiv
                elem <- suiv.elem
                suiv <- suiv.next
            Fin pour
            newElement = ALLOCATION_liste
            newElement.elem = e
            newElement.suiv = suiv
            constructedList.suiv <- newElement
            l <- constructedList
        Fin Si
    Fin Si
Fin

2.2

Fonction supprimerElem(l: liste, e: int)
Début
    _GENERAL_BEHAVIOR_NULL_OBJECT -> return /* Remplace les vérifications dès que var = null sur l'intégralité de la fonction /*
    Tant que l, l->l.suiv: /* Tant que l (fallback avec le _GBNO, variable l itinérante propre à la boucle tant que changeant à chaque itération (->), à ne pas confondre avec la variable l inaccessible dans la boucle (utiliser .l pour y accéder))
        Si l.elem = e:
            l.elem = l.suiv.elem
            l.suiv = l.suiv.suiv
        Fin Si
    Fin Tant que
Fin







