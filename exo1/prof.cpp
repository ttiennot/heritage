#include "prof.h"
using namespace std;

prof::prof(std::string lenom, std::string leprenom, int ann�e, std::string matiere, std::vector<std::string> classes)
	: personne(lenom, leprenom, ann�e)
{
	matiere = matiere;
	Classes = classes;
}

void prof::affiche()
{
	personne::affiche();
	cout << "Matiere :" << matiere.c_str() << ", Classes enseign�es :  ";
	for (const auto& classe : Classes) {
		cout << classe.c_str() << " ";
	}
	cout << endl; // equivalent de \n
}
