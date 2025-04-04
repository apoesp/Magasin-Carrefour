#include "Vente.h"
#include <iostream>

Vente::Vente(Client* c, std::vector<Produit*> p, std::vector<int> q)
    : client(c), produits(p), quantites(q) {

    CalculerMontant();
}

void Vente::CalculerMontant() {
    std::cout << "Ticket de caisse: ";
    for (size_t i = 0; i < produits.size(); ++i) {
        Produit* produit = produits[i];
        int quantite = quantites[i];

        if (quantite > produit->GetStockRayon()) {
            std::cout << "Stock en rayon insuffisant pour " << produit->GetNomProduit()
                << ".\n Il en reste : " << produit->GetStockRayon() << " en rayon. \n\n";
        }
        else {
            produit->SetStockRayon(produit->GetStockRayon() - quantite);
            double montantachat = quantite * produit->GetPrixVente();
            montantTotal += montantachat;
            std::cout << quantites[i] << " * " << produit->GetNomProduit() << "  "
                << produits[i]->GetPrixVente() << "€ = " << montantachat << "€ \n\n";
        }
    }

    if (client != nullptr && montantTotal > 0) {
        pointsfidelite += montantTotal / 2;
        client->AjouterPoints(pointsfidelite);
    }
}

void Vente::AfficherVente() const {
    if (client) {
        std::cout << "Client : " << client->GetNom() << " " << client->GetPrenom() << "\n";
    }
    else {
        std::cout << "Client : Inconnu\n";
    }
    std::cout << "Date de vente : " << dateVente << "\n";
    std::cout << "Montant total : " << montantTotal << "€\n";
    std::cout << "Points fidélité gagnés : " << pointsfidelite << " points\n";

    for (size_t i = 0; i < produits.size(); ++i) {
        std::cout << "Produit : " << produits[i]->GetNomProduit() << "\n"
            << "Quantité : " << quantites[i] << "\n"
            << "Prix fournisseur : " << produits[i]->GetPrixFournisseur() << "€\n"
            << "Prix vente : " << produits[i]->GetPrixVente() << "€\n";
    }
}
