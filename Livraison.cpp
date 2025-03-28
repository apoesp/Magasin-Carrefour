#include "Livraison.h"
#include <iostream>

Livraison::Livraison(std::string f, std::string d, std::vector<Produit> p, std::vector<int> qa, std::vector<int> ql)
    : fournisseur(f), date(d), ProduitsLivrees(p), QuantitesAttendues(qa), QuantitesLivrees(ql) {}

void Livraison::VerifierLivraison() {
    std::cout << "Information des livraisons:\n\n" << "Fournisseur: " << fournisseur << "\nDate: " << date << "\n\n";

    for (size_t i = 0; i < ProduitsLivrees.size(); i++) { 

        // "size_t" permet de parcourir la liste des produits livrés. 
        // C'est un type spécial, c'est un nombre toujours positif et adapté à la taille du tableau. 
        // Ça marche mieux qu'un int, car la taille d'une liste ne peut jamais être négative.

        std::cout << "Produit: " << ProduitsLivrees[i].GetNomProduit() << "," << ProduitsLivrees[i].GetIDProduit()
            << "\nAttendu: " << QuantitesAttendues[i]
            << "\nLivré: " << QuantitesLivrees[i] << "\n\n";

        if (QuantitesLivrees[i] < QuantitesAttendues[i]) {
            std::cout << "Il manque " << (QuantitesAttendues[i] - QuantitesLivrees[i]) << " unités. Il faut programmer une nouvelle livraison.\n\n";
        }
        else {
            std::cout << "Livraison complète.\n";
        }
    }
}
