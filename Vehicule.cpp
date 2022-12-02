#include "Vehicule.hpp"

Vehicule :: Vehicule(int vitesseMax, int nbPlaces, int occupants){

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
    int new_speed = this->vitesse_ + increment;
    if(new_speed > this->vitesseMax_ || new_speed < 0){
        throw std::invalid_argument("Invalid speed.");
    }
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