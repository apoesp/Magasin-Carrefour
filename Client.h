#pragma once
#include <string>
#include <iostream>
#include "Produit.h"
#include <vector>

class Client {
private:
    std::string nom;
    std::string prenom;
    std::string adresse;
    int pointsfidelite = 0;
public:
    Client(std::string n, std::string p);
    void SetAdresse(std::string a);
    void AfficherClient() const;
    void AchatProduit(std::vector<Produit*> produits, std::vector<int> quantites);

};
