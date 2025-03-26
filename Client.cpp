#include "Client.h"

Client::Client(std::string n, std::string p) : nom(n), prenom(p) {}

void Client::AjouterPoints(int montantAchat) {
    pointsfidelite += (montantAchat / 10) * 5;
}

void Client::SetAdresse(std::string a) { adresse = a; }

void Client::AfficherClient() {
    std::cout << "Client: " << prenom << " " << nom << "\n";
    std::cout << "Adresse: " << adresse << "\n";
    std::cout << "Points de fidélité: " << pointsfidelite << "\n\n";
}


