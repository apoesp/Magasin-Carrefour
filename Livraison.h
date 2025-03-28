#pragma once
#include <string>
#include "Produit.h"

class Livraison {
private:
    std::string fournisseur;
    std::string date;
    Produit produit;
    int QuantiteAttendue;
    int QuantiteLivree;

public:
    Livraison(std::string f, std::string d, Produit p, int qa, int ql);
    void VerifierLivraison();
};
