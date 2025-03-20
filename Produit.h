#pragma once
#include <string>

class Produit {
private:
    std::string nom;
    std::string id;
    std::string categorie;
    double poids = 0;
    double prixvente = 0;
    std::string conservation;
    double prixfournisseur = 0;
    int stockreserve = 0;
    int stockrayon = 0;

public:
    Produit(std::string n, std::string i, std::string c);

    void SetPoids(double p);
    void SetCategorie(std::string c);
    void SetPrixVente(double pv);
    void SetPrixFournisseur(double pf);
    void SetConservation(std::string cons);
    void SetStockReserve(int sre);
    void SetStockRayon(int sra);

    void afficher() const;
};
