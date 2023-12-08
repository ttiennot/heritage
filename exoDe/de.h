#pragma once
class de
{
private:
	int valeur;
	int scoreTotal;
	void randomInitialize();
public:
	// Constructeurs
	de();
	de(int valeur);
	// Méthodes
	void lancerDe();
	void resetScore();
	de& operator++(int);
	friend int operator+=(int& n, de de);
	void operator=(int val);
	friend int operator<(int& n, de de);
	//void afficher() const;
};

