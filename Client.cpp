#include "Client.h"

Client::Client(std::string n, std::string p) : nom(n), prenom(p) {}

void Client::SetAdresse(std::string a) { adresse = a; }

std::string Client::GetNom() const {
    return nom;
}

std::string Client::GetPrenom() const {
    return prenom;
}

int Client::GetPointsFidelite() const {
    return pointsfidelite;
}

void Client::AfficherClient() const {
    std::cout << "\nInformations du client:\n\n";
    std::cout << "Client: " << prenom << " " << nom << "\n";
    std::cout << "Adresse: " << adresse << "\n";
    std::cout << "Points de fidélité: " << pointsfidelite << "\n\n";
}

void Client::AjouterPoints(int points) {
    pointsfidelite += points;
}




