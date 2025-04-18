#include "Livraison.h"
#include <iostream>

Livraison::Livraison(std::string f, Date d, std::vector<Produit*> p, std::vector<int> qa, std::vector<int> ql)
    : fournisseur(f), dateLivraison(d), ProduitsLivrees(p), QuantitesAttendues(qa), QuantitesLivrees(ql) {}

void Livraison::VerifierLivraison() {
    std::cout << "Information des livraisons:\n\n" << "Fournisseur: " << fournisseur << "\nDate: ";
    dateLivraison.AfficherDate();
    std::cout << "\n\n";

    for (size_t i = 0; i < ProduitsLivrees.size(); i++) { 

        // "size_t" permet de parcourir la liste des produits livr�s. 
        // C'est un type sp�cial, c'est un nombre toujours positif et adapt� � la taille du tableau. 
        // �a marche mieux qu'un int, car la taille d'une liste ne peut jamais �tre n�gative.
        
        ProduitsLivrees[i]->SetStockReserve(QuantitesLivrees[i]);

        std::cout << "Produit: " << ProduitsLivrees[i]->GetNomProduit() << "," << ProduitsLivrees[i]->GetIDProduit()
            << "\nAttendu: " << QuantitesAttendues[i]
            << "\nLivr�: " << QuantitesLivrees[i] << "\n\n";

        if (QuantitesLivrees[i] < QuantitesAttendues[i]) {
            std::cout << "Il manque " << (QuantitesAttendues[i] - QuantitesLivrees[i]) << " unit�s. Il faut programmer une nouvelle livraison.\n\n";
            PlanifierLivraisonManquante();
        }
        else {
            std::cout << "Livraison compl�te.\n";
        }
    }
}

void Livraison::PlanifierLivraisonManquante() {
    std::cout << "Livraison manquante programm�e.\n\n";
}
