# Introduction C++ Pokémon Project

Ce projet est une introduction à la programmation C++ où nous avons créé plusieurs classes pour gérer des Pokémon, notamment une classe abstraite `SetOfPokemon`, ainsi que des classes dérivées telles que `PokemonParty`, `Pokeball`, et `Pokedex`.

## Structure du projet

- **main.cpp** : Point d'entrée du programme.
- **SetOfPokemon.h / SetOfPokemon.cpp** : Classe abstraite de base.
- **Pokemon.h / Pokemon.cpp** : Gestion des objets Pokémon.
- **Pokedex.h / Pokedex.cpp** : Implémentation d'un Pokédex (singleton).
- **Pokeball.h / Pokeball.cpp** : Gestion des Pokéballs.
- **PokemonParty.h / PokemonParty.cpp** : Gestion de l'équipe de Pokémon.

## Comment exécuter le projet

Pour compiler et exécuter le projet, utilisez la commande suivante :
g++ -std=c++11 -o Cplus main.cpp Pokemon.cpp SetOfPokemon.cpp Pokedex.cpp Pokeball.cpp PokemonParty.cpp ./Cplus
