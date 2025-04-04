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
    void AjouterPoints(int points);
    std::string GetNom() const { return nom; }
    std::string GetPrenom() const { return prenom; }
    int GetPointsFidelite() const { return pointsfidelite; }

};


