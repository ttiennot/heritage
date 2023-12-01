#include "personne.h"

personne::personne(std::string lenom, std::string leprenom, int annee){
	nom = lenom;
	prenom = leprenom;
	this->annee = annee;
}

personne::~personne()
{

}

void personne::affiche()
{
	std::cout << "Voici le nom : " << nom << std::endl;
	std::cout << "Voici le prenom : " << prenom << std::endl;
	std::cout << "Voici l'annee : " << annee << std::endl;
}
