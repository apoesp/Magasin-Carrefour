#include <iostream>
#include "Produit.h"
#include "Client.h"
#include "Categorie.h"
#include "Livraison.h"
#include "Vente.h" 

int main() {
    Categorie ca1("Alimentaire");
    Categorie ca2("Boisson");
    Categorie ca3("Maison");
    Categorie ca4("Produits d'entretien");

    Produit p1("Yaourt", "Y123", &ca1); // &ca1 est l'adresse mémoire de ca1
    Produit p2("Eau", "E456", &ca2);

    Date date("04", "04", "2025", "14", "30", "00");

    Client c1("Dupont", "Jean");

    p1.SetPrixVente(1.8);
    p2.SetPrixFournisseur(0.9);
    p1.Afficher();
    p2.Afficher();

    int MontantAchat = 25;
    c1.SetAdresse("12 rue ouioui");
    c1.AfficherClient();

    std::vector<Produit*> ProduitsLivres = { &p1, &p2 };
    std::vector<int> QuantitesAttendues = { 100, 50 };
    std::vector<int> QuantitesLivrees = { 80, 50 };

    Livraison livraison("Simpl", date, ProduitsLivres, QuantitesAttendues, QuantitesLivrees);
    livraison.VerifierLivraison();

   
    p2.Afficher();

    std::cout << "\nStock après la mise en rayon:\n";
    p1.MettreEnRayon(7);
    p1.Afficher();

    std::vector<Produit*> produitsachat = { &p1, &p2 };
    std::vector<int> quantitesAchat = { 3, 1 };
    
    Vente vente(&c1, produitsachat, quantitesAchat, date);
    vente.AfficherVente(); 


    p1.Afficher();
    c1.AfficherClient();


    Client* clientInconnu = nullptr;
    std::vector<Produit*> produitsachatInconnu = { &p1 };
    std::vector<int> quantitesAchatInconnu = { 2 };



    Vente ventennfid(clientInconnu, produitsachatInconnu, quantitesAchatInconnu, date);
    ventennfid.AfficherVente();
    p1.Afficher();

    return 0;
}
