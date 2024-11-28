//
// Created by admin on 26/11/2024.
//


#include "paquet.h"
#include <stdlib.h>
#include <time.h>

Domino pioche(Domino d) {
    unsigned int s = (unsigned int) time(NULL);
    srand(s);
    d.droite = rand() % 6;
    d.gauche = rand() % 6;
    return d;
}



