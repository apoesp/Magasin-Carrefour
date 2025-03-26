#include "Categorie.h"

Categorie::Categorie(std::string n) : nom(n) {}

void Categorie::Afficher() const {
    std::cout << "Catégorie : " << nom << std::endl;
}

std::string Categorie::NomCat() const {
    return nom;
}
