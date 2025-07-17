#include "arme.h"

// les loots de mobs classiques ( les ptites daubes qui srvent a rien a part les vendre)
using namespace std ;

class Loot : public Item {
private :

    int prix ;
    string description ;
    
public :

    Loot() ;
    Loot(string n, int moula , string desc) {
        nom =n ; prix = moula; description = desc ; }
    int getValeur() {return prix ;}
    string descrip () {return nom + "\n" + description ;}

};

