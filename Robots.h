#ifndef Robots_h
#define Robots_h

#include "Heros.h"

class Robots : public Heros
{
public:
    Robots(std::string nomheros, int vieheros, std::string nomarme, int puissancearme);
    Robots(std::string nomheros, int vieheros, std::string nomarme, int puissancearme, int forcegadgets);
    void utiliserLesGadgets(Heros &cible);
    virtual void afficher() const override;
private:
    int m_forcegadgets;
};
#include "Robots.cpp"
#endif /* Robots_h */