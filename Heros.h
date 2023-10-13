#ifndef Heros_h
#define Heros_h

#include <iostream>
#include <string>

class Heros
{
private:
    std::string m_nomheros; // Nom du héros
    int m_vieheros;
    std::string m_nomarme; // Nom de l'arme
    int m_puissancearme;
public:
    Heros();
    Heros(std::string nomheros, int vieheros, std::string nomarme, int puissancearme);
    void diminuerVie(int vieenmoins);
    void attaquer(Heros &cible);
    bool vivant() const;
    void afficher() const;
};
#include "Heros.cpp"
#endif