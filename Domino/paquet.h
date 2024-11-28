//
// Created by admin on 26/11/2024.
//

#ifndef PAQUET_H
#define PAQUET_H

#endif //PAQUET_H

#include "domino.h"

enum {
    MAX_JOUEUR= 4,
    INIT_NB_DOMINO1 =6,
    INIT_NB_DOMINO2=  7,
    MAX_VALUE = 6,
    MIN_VALUE = 0,
};
typedef struct {
  Domino domino[];
}Paquet;


/**
 * @brief donne un domino avec une valeur aléatoire
 * @param[out]d un domino auquel on lui attribuera des valeurs aléatoires
 * @return donne un domino
 */
Domino pioche(Domino d);