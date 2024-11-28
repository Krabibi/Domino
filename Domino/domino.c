#include <assert.h>
#include <stdio.h>

#include "domino.h"

void initDomino(Domino* dom, int g, int d) {
	assert(g >= MIN && g <= MAX);
	assert(d >= MIN && d <= MAX);
	dom->gauche = g;
	dom->droite = d;
}

int valeur(const Domino* d) {
	int mini = d->gauche < d->droite ? d->gauche : d->droite;
	int maxi = d->gauche > d->droite ? d->gauche : d->droite;
	return mini * (MAX - MIN + 1) + maxi;
}

void afficherDomino(const Domino* d) {
	printf("[%d,%d]/n", d->gauche, d->droite);
}

int orientationDomino(const Domino* d1, const Domino* d2) {
	if (d1->gauche == d2->droite )
		return 1;
	else
		return 0;
}

Domino reverseDomino(const Domino *d) {
	Domino newDomino;
	initDomino(&newDomino, d->droite, d->gauche);
	return newDomino;
}

void testDomino() {
	Domino d;
	initDomino(&d, 2, 5);
	assert(d.gauche==2 && d.droite==5);
	assert(!orientationDomino(&d, &d));
	Domino i;
	i = reverseDomino(&d);
	assert(i.gauche==5 && i.droite==2);
	assert(orientationDomino(&i, &d));
	assert(orientationDomino(&d, &i));
}


