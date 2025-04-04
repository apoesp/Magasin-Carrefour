#pragma once
#include <string>

struct Date {
    std::string jour = "";
    std::string mois = "";
    std::string annee = "";
    std::string heure = "";
    std::string minute = "";
    std::string seconde = "";

    Date(std::string j, std::string m, std::string a, std::string h, std::string min, std::string sec);

    void AfficherDate() const ;
};
