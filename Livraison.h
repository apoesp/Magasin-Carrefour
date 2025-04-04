#pragma once
#include <string>
#include "Produit.h"
#include "Date.h"
#include <vector>

class Livraison {
private:
    std::string fournisseur;
    Date dateLivraison;
    std::vector<Produit*> ProduitsLivrees;
    std::vector<int> QuantitesAttendues;
    std::vector<int> QuantitesLivrees;

public:
    Livraison(std::string f, Date date, std::vector<Produit*> p, std::vector<int> qa, std::vector<int> ql);
    void VerifierLivraison();
    void PlanifierLivraisonManquante();
};
