#pragma once
#include <string>
#include <iostream>

class Categorie {
private:
    std::string nom;
public:
    Categorie(std::string n);
    void Afficher() const;
    std::string GetCategorie() const;
};
