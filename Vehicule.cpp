#include "Vehicule.hpp"

Vehicule :: Vehicule(int vitesseMax, int nbPlaces, int occupants){

    this->vitesseMax_ = vitesseMax;
    this->nbPlaces_ = nbPlaces;
    this->occupants_ = occupants;

}

void Vehicule :: demarrer(){

    if(this->etat_ != ARRET){
        throw invalid_argument("Le véhicule est déja en marche !");
    }
    etat_ = MARCHE;
}
    
void Vehicule :: arreter(){
    if(this->etat_ != MARCHE){
        throw invalid_argument("Le véhicule est déja en marche !");
    }
    etat_ = ARRET;
}
    
void Vehicule :: depanner(){

}
    
void Vehicule :: accelerer(int increment){
    int new_speed = this->vitesse_ + increment;

    if(new_speed > this->vitesseMax_ || new_speed < 0){
        throw invalid_argument("Vitesse invalide.");
    } else {
        this->vitesse_ = new_speed;
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