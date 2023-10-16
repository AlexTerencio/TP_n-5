#ifndef Heros_h
#define Heros_h

#include <iostream>
#include <string>

class Heros
{
protected:
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
    virtual void afficher() const;
    static void afficherHeros(Heros &cible1, Heros &cible2, Heros &cible3, Heros &cible4, Heros &cible5, Heros &cible6, Heros &cible7, Heros &cible8);
    void volerArme(Heros &cible);
};
#include "Heros.cpp"
#endif