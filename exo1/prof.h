#pragma once
#include "personne.h"

class prof : public personne
{
    std::string matiere;
    std::vector<std::string> Classes;
public:
    prof(std::string lenom,
        std::string leprenom,
        int ann�e,
        std::string matiere,
        std::vector<std::string> classes);
    void affiche();
};