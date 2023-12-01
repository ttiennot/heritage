#include "prof.h"
using namespace std;

prof::prof(std::string lenom, std::string leprenom, int année, std::string matiere, std::vector<std::string> classes)
	: personne(lenom, leprenom, année)
{
	matiere = matiere;
	Classes = classes;
}

void prof::affiche()
{
	personne::affiche();
	cout << "Matiere :" << matiere << ", Classes enseignées :  ";
	for (const auto& classe : Classes) {
		cout << classe << " ";
	}
	cout << endl; // equivalent de \n
}
