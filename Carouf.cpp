#include <iostream>
#include "Produit.h"
#include "Client.h"
#include "Categorie.h"
#include "Livraison.h"

int main() {
    Categorie ca1("Alimentaire");
    Categorie ca2("Boisson");
    Categorie ca3("Maison");
    Categorie ca4("Produits d'entretien");

    Produit p1("Yaourt", "Y123", &ca1); // &ca1 est l'adresse mémoire de ca1
    Produit p2("Eau", "E456", &ca2);

    Client c1("Dupont", "Jean");

    p1.SetPrixVente(1.8);
    p2.SetPrixFournisseur(0.9);

    std::cout << "\nInformations des produits:\n\n";
    p1.Afficher();
    p2.Afficher();

    int MontantAchat = 25;
    c1.AjouterPoints(MontantAchat);
    c1.SetAdresse("12 rue ouioui");

    std::cout << "\nInformations du client:\n\n";
    c1.AfficherClient();

    Livraison livraison("Simpl", "2025-03-28", p1, 100, 80);
    livraison.VerifierLivraison();

    return 0;
}
