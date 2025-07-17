
#include "item.h"
#include <string> 

using namespace std ;
    

class arme : Item{

private:

    // on peut avoir des boost de stats 
    // pour ca on cite chaque stat en disant les effets que l'arme as dessus
    // genre force +20 
    // vitesse -10 
    int force = 0 ;
    int speed = 0 ; // la vitesse peut etre faire un float pour faire un multiplicateur
    int def = 0 ;
    
public:

    string description ;
    string descrip () ;
    

};



