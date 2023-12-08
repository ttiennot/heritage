#include "Dehisto.h"

Dehisto::Dehisto()
{


}

void Dehisto::jet()
{
	(*this)++;

}

void Dehisto::jet(int n)
{
	resultats.clear();  // Pour vider le vecteur resultats et le r�initialiser � vide

	for (int i = 0; i < n; ++i) {
		(*this)++;
		valeur += (*this);
		resultats.push_back(valeur);
	}
	
}

std::vector<int> Dehisto::getResultats() const
{
	return resultats;
}
