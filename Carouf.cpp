#include <iostream>
#include "Produit.h"
#include "Client.h"
#include "Categorie.h"
#include "Livraison.h"
#include "Vente.h"
#include "Date.h"

int main() {
    Categorie ca1("Alimentaire");
    Categorie ca2("Boisson");
    Categorie ca3("Maison");
    Categorie ca4("Produits d'entretien");

    Produit p1("Yaourt", "Y123", &ca1); // &ca1 est l'adresse mémoire de ca1
    Produit p2("Eau", "E456", &ca2);

    Date date("04", "04", "2025", "14", "30", "00");

    Client c1("Dupont", "Jean");
    c1.SetAdresse("12 rue ouioui");

    p1.SetPrixVente(1.8);
    p1.SetPrixFournisseur(0.9);
    p1.SetPoids(0.5);
    p1.SetConservation("Froid");

    p2.SetPrixVente(1.2);
    p2.SetPrixFournisseur(0.6);
    p2.SetPoids(1.0);
    p2.SetConservation("Ambiant");

    p1.Afficher();
    p2.Afficher();

    c1.AfficherClient();

    std::vector<Produit*> ProduitsLivres = { &p1, &p2 };
    std::vector<int> QuantitesAttendues = { 100, 50 };
    std::vector<int> QuantitesLivrees = { 80, 50 };
    Livraison livraison("Simpl", date, ProduitsLivres, QuantitesAttendues, QuantitesLivrees);
    livraison.VerifierLivraison();

    p1.Afficher();
    p2.Afficher();

    std::cout << "\nStock après la mise en rayon:\n";
    p1.ReserveToRayon(20);
    p1.Afficher();

    std::vector<Produit*> produitsachat = { &p1, &p2 };
    std::vector<int> quantitesAchat = { 3, 1 };
    Vente vente(&c1, produitsachat, quantitesAchat, date);
    vente.AfficherVente();

    Client* clientInconnu = nullptr;
    std::vector<Produit*> produitsachatInconnu = { &p1 };
    std::vector<int> quantitesAchatInconnu = { 2 };

    Vente venteSansClient(clientInconnu, produitsachatInconnu, quantitesAchatInconnu, date);
    venteSansClient.AfficherVente();

    p1.Afficher();
    p2.Afficher();

    c1.AfficherClient();

    return 0;
}
