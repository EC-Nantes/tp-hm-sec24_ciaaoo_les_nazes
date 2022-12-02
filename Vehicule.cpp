#include "Vehicule.hpp"

Vehicule :: Vehicule(int vitesseMax=0, int nbPlaces=1, int occupants=0){

    this->vitesseMax_ = vitesseMax;
    this->nbPlaces_ = nbPlaces;
    this->occupants_ = occupants;

}

void Vehicule :: demarrer(){

}
    
void Vehicule :: arreter(){
    
}
    
void Vehicule :: depanner(){

}
    
void Vehicule :: accelerer(int increment){

}
    
void Vehicule :: monter(int nbOcc){

}

void Vehicule :: descendre(int nbOcc){

}

void Vehicule :: mettreEnPanne(double random){

}
    
string Vehicule :: getEtat() const{
    return "";
}
    
Vehicule :: ~Vehicule(){

}