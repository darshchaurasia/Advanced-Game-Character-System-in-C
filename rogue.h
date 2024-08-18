#ifndef _ROGUE_H
#define _ROGUE_H
#include "player.h"
// Q5c: Create Rogue class (2.5 points)
// Part 1: Create a child class of the Player class named 'Rogue'
class Rogue : public Player {
public:
  // Part2: Declare constructor which accepts the same 3 parameters as the parent class Player's constructor.
  // Pass the 3 parameters to the super constructor of the Player class.
  Rogue(string name, int level, playerType type) : Player(name, level, type) {

  }
  // Part 3: Re-declare the method displayPlayer (virtual method found inside of parent class Player)
  void displayPlayer();  //base Player class has a virtual function named displayPlayer()

};

#endif // _ROGUE_H
