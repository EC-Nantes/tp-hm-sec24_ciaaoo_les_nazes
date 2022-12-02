#ifndef Bateau_hpp
#define Bateau_hpp
#include "Vehicule.hpp"

class Bateau : public Vehicule
{
protected:

public:

    Bateau(int vitesseMax=0, int nbPlaces=1, int occupants=0);

    // Methodes
    void demarrer();
    void arreter();

};
#endif /* Bateau_hpp */
