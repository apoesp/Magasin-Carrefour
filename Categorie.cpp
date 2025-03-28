#include "Categorie.h"

Categorie::Categorie(std::string n) : nom(n) {}

void Categorie::Afficher() const {
    std::cout << "Cat�gorie : " << nom << "\n";
}

std::string Categorie::GetCategorie() const {
    return nom;
}
