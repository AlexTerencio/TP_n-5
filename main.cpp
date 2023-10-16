#include <iostream>
#include "Heros.h"
#include "Jedis.h"
#include "Siths.h"
#include "Humains.h"
#include "Robots.h"

using namespace std;

int main(){

    // Création de tous les objets Heros
    Jedis yoda("Maitre Yoda", 260, "Sabre Laser", 50);
    Jedis luke("Luke Skyalker", 450, "Pistolet Laser", 50);
    Humains leia("Princesse Leia", 100, "Pistolet Laser", 30);
    Humains solo("Han Solo", 150, "Pistolet Laser", 30);
    Siths palpatine("Empereur Palpatine", 250, "Sabre Laser", 50);
    Siths vador("Dark Vador", 400, "Sabre Laser", 50);
    Robots r2d2("R2D2", 50, "Pistolet Laser", 30);
    Robots c3po("C-3PO", 80, "Laser", 30);

    // Création des informations des Heros
    yoda.afficher();
    luke.afficher();
    leia.afficher();
    solo.afficher();
    palpatine.afficher();
    vador.afficher();
    r2d2.afficher();
    c3po.afficher();

    yoda.attaquer(vador);
    vador.attaquer(luke);
    luke.attaquer(palpatine);
    palpatine.attaquer(yoda);
    leia.attaquer(vador);
    solo.attaquer(palpatine);
    r2d2.attaquer(vador);
    c3po.attaquer(palpatine);
    cout << endl;

    yoda.volerArme(vador);
    luke.volerArme(palpatine);
    palpatine.volerArme(luke);
    vador.volerArme(yoda);
    palpatine.volerArme(leia);
    vador.volerArme(solo);
    palpatine.volerArme(r2d2);
    vador.volerArme(c3po);
    cout << endl;

    palpatine.utiliserLeCoteObscur(luke);
    vador.utiliserLeCoteObscur(yoda);
    leia.coupDePoing(palpatine);
    solo.coupDePoing(vador);
    r2d2.utiliserLesGadgets(palpatine);
    c3po.utiliserLesGadgets(vador);
    luke.utiliserLaForce(vador);
    yoda.utiliserLaForce(palpatine);
    cout << endl;

    // Affichage des informations des heros
    yoda.afficher();
    luke.afficher();
    palpatine.afficher();
    vador.afficher();
    leia.afficher();
    solo.afficher();
    r2d2.afficher();
    c3po.afficher();
    cout << endl;

    Heros::afficherHeros(yoda, luke, palpatine, vador, leia, solo, r2d2, c3po);
    
    return 0;
}