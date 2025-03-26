#pragma once
#include <string>
#include <iostream>

class Client {
private:
    std::string nom;
    std::string prenom;
    std::string adresse;
    int pointsfidelite = 0;
public:
    Client(std::string n, std::string p);
    void SetAdresse(std::string a);
    void AjouterPoints(int MontantAchat);
    void AfficherClient();
};
