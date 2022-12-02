#include "Bateau.hpp"

Bateau :: Bateau(int vitesseMax, int nbPlaces1, int occupants0) : Vehicule(vitesseMax, nbPlaces1, occupants0){

    /*
    this->vitesseMax_ = vitesseMax;
    this->nbPlaces_ = nbPlaces1;
    this->occupants_ = occupants0;
    */

}

void Bateau :: demarrer(){
    cout << "Je vais te demarrer!" << endl;
    Vehicule :: demarrer();
}
    
void Bateau :: arreter(){
    cout << "Arrête toi brigarde des stups!" << endl;
    Vehicule :: arreter();
}
    
