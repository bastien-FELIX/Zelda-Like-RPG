#include "item.h"  

// les loots de mobs classiques ( les ptites daubes qui srvent a rien a part les vendre)
using namespace std ;

class Loot : public Item {
private :

    int prix ;
    string description ;
    
public :

    int getValeur() {return prix ;}

};

