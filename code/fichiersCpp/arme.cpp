
#include "arme.h"

std::string arme::descrip () {

    string affichage ;

    if (force != 0 ) {
        affichage += force + "\n";
    }
    if (speed != 0 ) {
        affichage += force + "\n";
    }
    if (def != 0 ) {
        affichage += force + "\n";
    }
    affichage += description ;
    
    return affichage ;

}




