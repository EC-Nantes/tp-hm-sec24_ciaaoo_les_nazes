#include <stdio.h>
#include <iostream>

#include "Vehicule.hpp"

using namespace std;

int main(){
    cout << "Hello les loosers !" << endl;

    try {
        Vehicule * Vehicule = new Vehicule(0, 0, 0);
    }

    return 0;
}