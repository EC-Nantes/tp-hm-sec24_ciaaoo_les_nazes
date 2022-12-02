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
    int nbOccupants = nbOcc + this->occupants_;
    
    if(nbOccupants > this->nbPlaces_){
        throw invalid_argument("Pas assez de place dans le véhicule !");
    }

    this->occupants_ = nbOccupants;
}

void Vehicule :: descendre(int nbOcc){
    int nbOccupants = this->occupants_ - nbOcc;
    
    if(nbOccupants < 0){
        throw invalid_argument("Pas assez d'occupants dans le véhicule !");
    }

    this->occupants_ = nbOccupants;
}

void Vehicule :: mettreEnPanne(double random){
    if(random > 0.5){
        etat_ = PANNE_SEVERE;
    } else {
        etat_ = PANNE_LEGERE;
    }
}

string Vehicule :: getEtat() const{
    switch(this->etat_){
        case ARRET:
            return "arret";
        case MARCHE:
            return "marche";
        case PANNE_LEGERE:
            return "panne legere";
        case PANNE_SEVERE:
            return "panne severe";
    }
}
    
Vehicule :: ~Vehicule(){

}