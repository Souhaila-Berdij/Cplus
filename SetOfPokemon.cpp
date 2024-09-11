//
// Created by antotauv on 09/09/2024.
//

#include "SetOfPokemon.h"

#include <iostream>

void SetOfPokemon::displayList() {
    std::cout << "*********************************"<< std::endl;
    for(Pokemon * pokemon : arrayOfPokemon){
        pokemon->displayInfo();
    }
}

SetOfPokemon::SetOfPokemon(){
}
