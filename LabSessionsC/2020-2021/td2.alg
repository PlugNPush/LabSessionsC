1.1
Fonction afficherListe(l: Liste)
Donnée copiée: l
Début
    Si l != null:
        afficherListe(l->suiv)
        Afficher l->val
    Fin Si
Fin

1.2
Fonction concatener(l1: Liste, l2: Liste)
Paramètre modifié: l1, l2
Variable locale: temp: Liste
Début
    temp <- l1
    Tant que temp != null:
        temp <- temp->suiv
    Fin tant que
    temp->suiv <- l2
    l1 <- temp
Fin

1.3
Fonction parcourirListeCirculaire(lc: ListeCirculaire)
Donnée copiée: lc
Variable locale: Elem1: Adresse de ListeCirculaire
Début
    Elem1 <- Adresse(lc)
    Faire:
        lc <- lc->suiv
    Tant que lc != null OU Adresse(lc) != Elem1
    Fin Faire Tant que
Fin

1.4
Fonction convertAtoL(a: Array d'Int, t: int): Liste
Donnée copiée: a, t
Variable locale: l: Liste, temp: Liste, i: Int
Début
    i <- 1
    l <- Allocation: Liste
    temp <- l
    Tant que i <= t:
        temp->suiv <- a[i]
        temp <- temp->suiv
        i <- i+1
    Fin tant que
Fin

1.5
Fonction couper(l1: Liste, e: Int, l2: Liste)
Paramètres modifiés: l1, l2
Donnée copiée: e
Variable locale: pos, chg: Int, temp: Liste, temp2: Adresse de Liste
Début
    chg <- 0
    pos <- 0
    temp <- l1
    Tant que l1 != null ET chg != 1:
        pos <- pos+1
        Si temp->val = e:
            chg <- 1
        Fin Si
        temp <- temp->suiv
    Fin Tant que
    Si chg = 1:
        temp2 <- Adresse(l1)
        Pour i <- 1 jusqu'à i >= pos:
            temp2 <- Adresse(Valeur(temp2->suiv))
        Fin Pour
        l2 <- Valeur(temp2->suiv)
        temp2->suiv <- null
    Fin Si
Fin

2.1
Fonction ajouter(l: Liste, a: Array d'Int, t: int)
Donnée copiée: a, t
Paramètre modifié: l
Variable locale: temp: Liste, i: Int
Début
    temp <- l
    Tant que temp != null:
        temp <- temp->suiv
    Fin tant que
    i <- 1
    Tant que i <= t:
        Adresse(temp)->suiv <- a[i]
        temp <- temp->suiv
        i <- i+1
    Fin tant que
Fin

2.2
Fonction tri(l: Liste)
Paramètre modifié: l
Variable locale: ord, called: Int, prev: Adresse de liste, temp: Liste, copieL: Adresse de Liste
Début
    ord <- 1
    called <- 0
    prev <- l
    copieL <- Adresse(l)
    Tant que ord != 0:
        Si l = null:
            l <- Valeur(copieL)
            Si called = 1:
                called <- 0
            Sinon:
                ord <- 1
                Retourner
            Fin Si
        Sinon Si l->suiv->val < prev->val:
            temp <- l1->suiv
            l->suiv <- prev
            prev <- temp
            called <- 1
        Fin Si
        l <- l->suiv
    Fin Tant que
Fin

2.3
Structure Pile:
    val: Int
    prev: Pile
Fin Structure

- AjouterElement(p: Pile, e: element) {ONCE p->prev = null REACHED; CURRENT p->prev <- ALLOC(FORMAT: Pile, USING: e)}
- SupprimerElement(...)
- TrierPile(...)

        
2.4
Structure File:
    val: Int
    suiv: File
Fin Structure

Structure équivalente à Liste => Fonctions rétro-compatibles

2.5
Fonction symetrie(l: CentraleListe2): Booléen
Donnée copiée: l
Variable locale: g, d: Liste
Début
    Tant que l->g != null ET l->d != null:
        g <- l->g
        d <- l->d
        Si g->val != d->val:
            Retourner faux
        Fin Si
        g <- g->suiv
        d <- d->suiv
    Fin Tant que
    Retourner vrai
Fin

2.6
Fonction lscToTab(l: Liste): Array d'Int de Taille 0
Donnée copiée: l
Variable locale: i, count: Int, a: Array d'Int de Taille 0, copieL: Liste
__DYNAMIC_FUNCTION_STATUS_ENABLED=TRUE; __REQUIRED_LISTENERS:OUTPUT; __OUTPUT_CHANGE_NOTIFY_LISTENER_ACCESS=ALLOC(DYNAMIC_OUTPUT_MEMORY_BLOC)
Début
    count = 0
    copieL <- l
    Tant que l != null:
        count <- count+1
        l <- l->suiv
    Fin Tant que
    __VAR_DECLARATION_REWRITE(a, "Variable locale", "Array d'Int de Taille \(CURRENT(count))")
    __OUTPUT_DECLARATION_REWRITE_NOTIFY("Array d'Int de Taille \(CURRENT(count))")
    i <- 1
    Tant que i <= count
        a[i] <- copieL
        copieL <- copieL->suiv
        i <- i+1
    Fin Tant que
    Retourner a
Fin
