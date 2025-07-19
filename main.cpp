
#include <iostream>
//#include "code/en-tete/item.h"
#include "code/en-tete/loot.h"

using namespace std;

int main() {
    
    Loot unLoot("portemonaie",1000,"un riche l'a fait tomber... \ntant pis pour lui") ;
    Arme uneArme("Mon giga katana", 170, 2, 20,"j'ai un super gros sabre") ;
    cout << uneArme.descrip() << endl ;
    cout << unLoot.descrip() << endl ;
    cout << endl;


}






