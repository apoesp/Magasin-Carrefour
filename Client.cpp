#include "Client.h"

Client::Client(std::string n, std::string p) : nom(n), prenom(p) {}


void Client::SetAdresse(std::string a) { adresse = a; }

void Client::AfficherClient() const {
    std::cout << "\nInformations du client:\n\n";
    std::cout << "Client: " << prenom << " " << nom << "\n";
    std::cout << "Adresse: " << adresse << "\n";
    std::cout << "Points de fidélité: " << pointsfidelite << "\n\n";
}


void Client::AchatProduit(std::vector<Produit*> produits, std::vector<int> quantites) {


    double totalachat = 0;

    std::cout << "Achat :\n\n";
    for (size_t i = 0; i < produits.size(); i++) {
        Produit* produit = produits[i];
        int quantite = quantites[i];

        if (quantite > produit->GetStockRayon()) {
            std::cout << "Stock en rayon insuffisant pour " << produit->GetNomProduit() << ".\n Il en reste : " << produit->GetStockRayon() << " en rayon. \n\n";
        }
        else {
            produit->SetStockRayon(produit->GetStockRayon() - quantite);
            double montantachat = quantite * produit->GetPrixVente();
            totalachat += montantachat;
            std::cout << quantites[i] << "*" << produits[i]->GetPrixVente() << "=" << montantachat << "€ \n\n";
           
        }
    }

    if (totalachat > 0) {
        pointsfidelite += totalachat / 2;
        std::cout << "Le total est de : " << totalachat << " € \n" <<" Points fidélité : " << pointsfidelite<< "\n";
    }
}


