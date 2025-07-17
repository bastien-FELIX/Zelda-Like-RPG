
#include "item.h"
#include <string> 

using namespace std ;
    

class Arme : Item{

private:

    // on peut avoir des boost de stats 
    // pour ca on cite chaque stat en disant les effets que l'arme as dessus
    // genre force +20 
    // vitesse -10 
    int force = 0 ;
    int speed = 0 ; // la vitesse peut etre faire un float pour faire un multiplicateur
    int def = 0 ;
    string description ;

    
public:

    Arme (string n , int strength , int vit, int defffe, string desc) {
        nom = n ; force = strength ; speed = vit ; def = defffe ; description = desc ;}

    Arme() {}

    
    string descrip () {

        string affichage = nom + "\n" ;
        if (force != 0 ) {affichage += to_string(force) ; ;}
        affichage +=  "\n";

        if (speed != 0 ) {affichage += to_string(speed) ;}
        affichage +=  "\n";

        if (def != 0 ) {affichage += to_string(def);}
        affichage +=  "\n";

        affichage += description ;
        return affichage ;}


};



