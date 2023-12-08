#include "de.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

// Constructeur par d�faut
de::de() {
	scoreTotal = 0;
	randomInitialize();
	lancerDe();

}

// Constructeur avec initialisation de la valeur
de::de(int valeurInitiale) : valeur(valeurInitiale) {}

// M�thode pour lancer le d�
void de::lancerDe() {
	valeur = rand() % 6 + 1;
	this->scoreTotal = scoreTotal + valeur;

}

// M�thode pour reset le score
void de::resetScore() {
	valeur = 0;
}

// Surcharge de l'op�rateur d'incr�mentation (++dd)
de& de::operator++(int) {
	lancerDe();
	return *this;
}

// Surcharge de l'op�rateur d'addition (n += dd)
int operator+=(int& n, de de) {
	n = de.valeur;
	return n;
}

// Surcharge de l'op�rateur d'affectation (dd = 0)
void de::operator=(int val) {
	scoreTotal = val;
}

// Surcharge de l'op�rateur de comparaison (n < dd)
int operator<(int& n, de de) {
	n = de.scoreTotal;
	return n;
}


// M�thode pour initialiser la graine du g�n�rateur al�atoire
void de::randomInitialize() {
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
}