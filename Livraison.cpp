#include "Livraison.h"
#include <iostream>

Livraison::Livraison(std::string f, std::string d, Produit p, int qa, int ql)
    : fournisseur(f), date(d), produit(p), QuantiteAttendue(qa), QuantiteLivree(ql) {}

void Livraison::VerifierLivraison() {
    std::cout << "Information des livraisons:\n\n" << "Fournisseur: " << fournisseur << "\n Produit: " << produit.GetNomProduit() << "," << produit.GetIDProduit()
        << "\n Attendu: " << QuantiteAttendue << "\n Livré: " << QuantiteLivree << "\n\n";

    if (QuantiteLivree < QuantiteAttendue) {
        std::cout << "Il manque " << (QuantiteAttendue - QuantiteLivree) << " unités. Il faut programmer une nouvelle livraison \n";
    }
    else {
        std::cout << "Livraison complète.\n";
    }
}
