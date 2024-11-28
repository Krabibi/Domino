//
// Created by admin on 28/11/2024.
//

#ifndef JEU_H
#define JEU_H

#endif //JEU_H


#include "domino.h"

enum {MAX_DOMINO = 100};

typedef struct {
    int nbDomino;
    Domino domTalon[MAX_DOMINO];
}Talon;


void initTalon(Talon* t);

void jouerTalon(Talon* t, const Domino* d);
