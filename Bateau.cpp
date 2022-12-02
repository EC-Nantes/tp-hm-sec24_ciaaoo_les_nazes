#include "Bateau.hpp"

Bateau :: Bateau(int vitesseMax, int nbPlaces1, int occupants0) : Vehicule(int vitesseMax, int nbPlaces, int occupants){

    this->vitesseMax_ = vitesseMax;
    this->nbPlaces_ = nbPlaces;
    this->occupants_ = occupants;

}

void Bateau :: demarrer(){
    cout << "En avant fluffycoquin !" << endl;
}
    
void Bateau :: arreter(){
    cout << "On arrête tout fluffycoquin !" << endl;
}
    
