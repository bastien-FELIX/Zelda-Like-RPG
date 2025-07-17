#include <string.h>

using namespace std ;

class Item {

protected :
    
    string nom ;

public:

    string getNom () {return nom ;}
    // un item peut etre affiché 
    // que ce soit dans l'inventaire ou en tant que loot au sol
    // on aura d'autre truc mais pour l'instant c deja pas mal
    virtual string descrip () {} ;

} ;








