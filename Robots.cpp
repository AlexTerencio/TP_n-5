#include <stdio.h>
#include "Robots.h"
#include <string>

using namespace std;

Robots::Robots(string nomheros, int vieheros, string nomarme, int puissancearme) : Heros(nomheros,vieheros, nomarme, puissancearme), m_forcegadgets(20) // Constructeur avec les attributs du Heros determiner et m_force a 100
{    
}

Robots::Robots(string nomheros, int vieheros, string nomarme, int puissancearme, int forcegadgets) : Heros (nomheros, vieheros, nomarme, puissancearme), m_forcegadgets(forcegadgets) // Constructeur avec tous les attributs a determiner
{
}

void Robots::utiliserLesGadgets(Heros &cible)
{
    cout << m_nomheros << " attaque avec une force de " << m_forcegadgets << endl;
    cible.diminuerVie(m_forcegadgets);
}

void Robots::afficher() const
{
    Heros::afficher();
    cout << "Niveau de Force : " << m_forcegadgets << endl; 
}