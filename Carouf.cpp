#include <iostream>
#include "Produit.h"

int main() {

    Produit p1("Yaourt", "Y123", "Alimentaire");
    Produit p2("Eau", "E456", "Boisson");

    p1.afficher();
    p2.afficher();

    p1.SetPrixVente(1.8);
    p1.SetStockRayon(25);

    std::cout << "\nAprès modification du prix et du stock en rayon :\n";

    p1.afficher();

    return 0;
}
