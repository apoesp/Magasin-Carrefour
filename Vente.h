#pragma once
#include <vector>
#include "Client.h"
#include "Produit.h"
#include <ctime>

class Vente {
private:
    std::string dateVente;
    Client* client;
    std::vector<Produit*> produits;
    std::vector<int> quantites;
    double montantTotal = 0;
    int pointsfidelite = 0;

public:
    Vente(Client* c, std::vector<Produit*> p, std::vector<int> q);
    void CalculerMontant();
    void AfficherVente() const;
};
