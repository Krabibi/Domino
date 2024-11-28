//
// Created by admin on 28/11/2024.
//

#include "jeu.h"
#include <assert.h>

void initTalon(Talon* t) {
    t->nbDomino=0;
}

void jouerTalon(Talon* t, const Domino* d) {
    assert(orientationDomino(&t->domTalon[t->nbDomino], d));
    t->domTalon[t->nbDomino++]= *d;
}