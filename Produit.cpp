#include "Produit.h"
#include <iostream>



Produit::Produit(std::string n, std::string i, std::string c) : nom(n), id(i), categorie(c) {}

void Produit::SetPoids(double p) { poids = p; }
void Produit::SetCategorie(std::string c) { categorie = c; }
void Produit::SetPrixVente(double pv) { prixvente = pv; }
void Produit::SetPrixFournisseur(double pf) { prixfournisseur = pf; }
void Produit::SetConservation(std::string cons) { conservation = cons; }
void Produit::SetStockReserve(int sre) { stockreserve = sre; }
void Produit::SetStockRayon(int sra) { stockrayon = sra; }


void Produit::afficher() const {
    std::cout << "Produit : " << nom << "\n";
    std::cout << "Identifiant : " << id << "\n";
    std::cout << "Catégorie : " << categorie << "\n";
    std::cout << "Conservation : " << conservation << "\n";
    std::cout << "Poids : " << poids << " kg\n";
    std::cout << "Prix de vente : " << prixvente << " €\n";
    std::cout << "Prix fournisseur : " << prixfournisseur << " €\n";
    std::cout << "Stock en réserve : " << stockreserve << "\n";
    std::cout << "Stock en rayon : " << stockrayon << "\n";
}
