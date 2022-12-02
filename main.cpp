#include <stdio.h>
#include <iostream>
#include <Windows.h>

#include "Vehicule.hpp"

using namespace std;

int main(){
    cout << "Hello les loosers !" << endl;

    int vitesse_max;
    int places;
    int occupants;

    cout << "Vitesse max : ";
    cin >> vitesse_max;
    cout << "places : ";
    cin >> places;
    cout << "occupants";
    cin >> occupants;

    Vehicule * Vehicule = new class Vehicule(vitesse_max, places, occupants);

    int temp;
    string string_temp;

    try {
        cout << "Combien d'occupants montent :" << endl;
        cin >> temp;
        Vehicule->monter(temp);
    } catch(invalid_argument & ex){
        cout << ex.what() << endl;
    }

    try {
        cout << "Combien d'occupants descendent : " << endl;
        cin >> temp;
        Vehicule->descendre(temp);
    } catch(invalid_argument & ex){
        cout << ex.what() << endl;
    }

    try {
        cout << "Accelerer : " << endl;
        cin >> temp;
        Vehicule->accelerer(temp);
    } catch(invalid_argument & ex){
        cout << ex.what() << endl;
    }

    try {
        cout << "Démarrer ? [o/n]" << endl;
        cin >> string_temp;
        if(string_temp == "o"){
            Vehicule->demarrer();
        }
    } catch(invalid_argument & ex){
        cout << ex.what() << endl;
    }

    try {
        cout << "Arreter ? [o/n]" << endl;
        cin >> string_temp;
        if(string_temp == "o"){
            Vehicule->arreter();
        }
    } catch(invalid_argument & ex){
        cout << ex.what() << endl;
    }

    return 0;
}