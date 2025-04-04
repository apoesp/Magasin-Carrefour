#include "Date.h"
#include <iostream>

Date::Date(std::string j, std::string m, std::string a, std::string h, std::string min, std::string sec)
    : jour(j), mois(m), annee(a), heure(h), minute(min), seconde(sec) {}

void Date::AfficherDate() const  {
    std::cout << jour << "/" << mois << "/" << annee << " " << heure << ":" << minute << ":" << seconde;
}
