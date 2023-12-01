// exo1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
#include <iostream>
#include "etudiant.h"
#include "prof.h"
#include <vector>
using namespace std;
int main()
{
    etudiant eleve1((char*)"Thibaut", (char*)"Tiennot", 2020, (char*)"A123", new float[3] {15.0, 17.0, 11.0}, (char*)"excellent eleve");
    prof enseignant1("Alexandre", "Gremont", 2020, "Informatique", vector<string>{"A123", "B456"});
    eleve1.affiche();
    cout << endl;
    enseignant1.affiche();
    return 0;
}