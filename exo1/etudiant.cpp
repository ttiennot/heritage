#include "etudiant.h"
#include <iostream>
using namespace std;

etudiant::etudiant(std::string lenom, std::string leprenom, int annee, char* classe, float* Moyenne, std::string commentaires)
	: personne(lenom, leprenom, annee)
{
	commentaires = commentaires;
	strncpy_s(this->classe, classe, sizeof(this->classe) - 1);
	for (int i = 0; i < 3; i++) {
		moyenne[i] = moyenne[i];
	}

}

etudiant::~etudiant()
{
}

void etudiant::affiche()
{
	personne::affiche();
	cout << "Classe :" << classe << ", Moyennes :";
	for (int i = 0; i < 3; i++) {
		cout << moyenne[i] << " ";
	}
	cout << ", Commentaires : " << commentaires << endl;

}
