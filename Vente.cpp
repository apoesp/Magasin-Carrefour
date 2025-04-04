#include "Vente.h"
#include <iostream>

Vente::Vente(Client* c, std::vector<Produit*> p, std::vector<int> q, Date date)
    : client(c), produits(p), quantites(q), dateVente(date) {
    CalculerMontant();
}

void Vente::CalculerMontant() {
    std::cout << "\n\nDétail de la vente: \n\nTicket de caisse: ";

    for (size_t i = 0; i < produits.size(); ++i) {
        Produit* produit = produits[i];
        int quantite = quantites[i];

        if (quantite > produit->GetStockRayon()) {
            std::cout << "Stock en rayon insuffisant pour " << produit->GetNomProduit() << ".\nIl en reste : " << produit->GetStockRayon() << " en rayon.\n\n";
        }
        else {
            produit->SetStockRayon(produit->GetStockRayon() - quantite);
            double montantachat = quantite * produit->GetPrixVente();
            montantTotal += montantachat;
            std::cout << quantite << " * " << produit->GetNomProduit() << " à " << produit->GetPrixVente() << "€ = " << montantachat << "€\n\n";
        }
    }

    if (montantTotal > 0 && client != nullptr) {
        pointsfidelite += montantTotal / 2;
        client->AjouterPoints(pointsfidelite);
    }
}

void Vente::AfficherVente() const {

    if (client != nullptr) {
        std::cout << "Client : " << client->GetNom() << " " << client->GetPrenom() << "\n";
    }
    else {
        std::cout << "Client : Anonyme\n";
    }

    std::cout << "Date de vente : ";
    dateVente.AfficherDate();

    std::cout << "\nMontant total : " << montantTotal << "€\n";
    std::cout << "Points fidélité gagnés : " << pointsfidelite << " points\n";

    for (size_t i = 0; i < produits.size(); ++i) {
        std::cout << "Produit : " << produits[i]->GetNomProduit() << "\nQuantité : " << quantites[i] << "\n";
    }
}
