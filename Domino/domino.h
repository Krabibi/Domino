#pragma once

enum { 
	MIN = 0, ///< Valeur minimale port�e par un domino.
	MAX = 6  ///< Valeur maximale port�e par un domino.
};

typedef struct {
	int gauche; ///< Valeur port�e � gauche par le domino.
	int droite; ///< Valeur port�e � droite par le domino.
} Domino;

/**
 * @brief Initialise un domino avec les 2 valeurs qu'il porte.
 * @param[out] dom Le domino devant �tre initialis�.
 * @param[in] g La valeur port�e � gauche.
 * @param[in] d La valeur port�e � droite.
 * @pre <code>g</code> et <code>d</code> doivent prendre des valeurs 
 * comprises entre <code>MIN</code> et <code>MAX</code>. 
 */
void initDomino(Domino* dom, int g, int d);

/**
 * @brief Retourne le nombre de points que vaut un domino.
 * @param[in] d Le domino.
 * @return Sa valeur (i.e. le nombre de points qu'il vaut).
 */
int valeur(const Domino* d);


/**
 *@brief affiche le domino
 *@param[in]d Le domino qu'on veut afficher
 */
void afficherDomino(const Domino* d);


/**
 * @brief Dit si le domino peut être placer a gauche d'un autre domino ou pas
 * @param[in]d1 le domino de référence
 * @param[in]d2 le domino qu'on veut tester
 * @return 0 si il ne peut pas être placé
 */
int orientationDomino(const Domino* d1,const Domino* d2);

/**
 * @brief inverse les valeurs du Domino
 * @param[in]d le domino auquel on veut inverser ses valeurs
 */
Domino reverseDomino(const Domino* d);

/**
 * @brief test si toute les fonctions fontionnent bien
 */
void testDomino();