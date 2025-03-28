#include "Produit.h"
#include <iostream>

Produit::Produit(std::string n, std::string i, Categorie* c) : nom(n), id(i), categorie(c) {} // "*" indique ici que c est un pointeur vers un objet Categorie (c contient une adresse) => Produit accède à catégorie sans besoin d'une copie

void Produit::SetPoids(double p) { poids = p; }
void Produit::SetPrixVente(double pv) { prixvente = pv; }
void Produit::SetPrixFournisseur(double pf) { prixfournisseur = pf; }
void Produit::SetConservation(std::string cons) { conservation = cons; }
void Produit::SetStockReserve(int sre) { stockreserve = sre; }
void Produit::SetStockRayon(int sra) { stockrayon = sra; }

void Produit::Afficher() const {
    std::cout << "Produit : " << nom << "\n";
    std::cout << "Identifiant : " << id << "\n";
    std::cout << "Catégorie : " << categorie->GetCategorie() << "\n";  // "->" permet d'accéder aux membres d'un objet à travers un pointeur (ici on accéde au nom de la catégorie) Si ce n'etait pas un pointeur on utiliserais le "." ex: categorie.NomCat()
    std::cout << "Conservation : " << conservation << "\n";
    std::cout << "Poids : " << poids << " kg\n";
    std::cout << "Prix de vente : " << prixvente << " €\n";
    std::cout << "Prix fournisseur : " << prixfournisseur << " €\n";
    std::cout << "Stock en réserve : " << stockreserve << "\n";
    std::cout << "Stock en rayon : " << stockrayon << "\n\n";
}

std::string Produit::GetNomProduit() const {
    return nom;
}

std::string Produit::GetIDProduit() const {
    return id;
}