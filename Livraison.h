#pragma once
#include <string>
#include "Produit.h"
#include <vector>

class Livraison {
private:
    std::string fournisseur;
    std::string date;
    std::vector<Produit*> ProduitsLivrees;
    std::vector<int> QuantitesAttendues;
    std::vector<int> QuantitesLivrees;

public:
    Livraison(std::string f, std::string d, std::vector<Produit*> p, std::vector<int> qa, std::vector<int> ql);
    void VerifierLivraison();
    void PlanifierLivraisonManquante();
};
