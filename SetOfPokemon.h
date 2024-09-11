//
// Created by antotauv on 09/09/2024.
//

#ifndef POKEMONIS_SETOFPOKEMON_H
#define POKEMONIS_SETOFPOKEMON_H

#include <vector>
#include "Pokemon.h"

class SetOfPokemon {
protected :
    std::vector<Pokemon *> arrayOfPokemon;
public :
    virtual Pokemon* getOnePokemonByName(string name)=0;
    virtual Pokemon* getOnePokemonById(int id)=0;
    void displayList();
    SetOfPokemon();

   // virtual ~SetOfPokemon();
};



#endif //POKEMONIS_SETOFPOKEMON_H
