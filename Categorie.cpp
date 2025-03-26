#include "Categorie.h"

Categorie::Categorie(std::string n) : nom(n) {}

void Categorie::Afficher() const {
    std::cout << "Cat�gorie : " << nom << std::endl;
}

std::string Categorie::NomCat() const {
    return nom;
}
