#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>
using namespace std;

enum playerType { warrior = 0, wizard, rogue }; // definition of playerType

class Player {
private:
    string name; // private data members
    int health;
    int mana;
    int armor;
    int magicResist;
    int attack;
    int magicAttack;
    int level;
    playerType archetype;

public:
    Player(string playerName, int levelInput, playerType archetypeInput); // constructor

    // accessor methods
    string getName();
    int getHealth();
    int getMana();
    int getArmor();
    int getMagicResist();
    int getAttack();
    int getMagicAttack();
    int getLevel();
    playerType getPlayerType();

    virtual void displayPlayer()
    {}

    // Q7-a: Declare Friend Function updateLevel() (0.5 points)
friend void updateLevel(Player* player, int newLevel);

void updateLevel(Player* player, int newLevel) {
    // Update player attributes based on archetype and new level
    switch (player->getPlayerType()) {
        case warrior:
            player->health = newLevel * 100;
            player->mana = newLevel * 10;
            player->armor = newLevel * 50;
            player->magicResist = newLevel * 25;
            player->attack = newLevel * 50;
            player->magicAttack = newLevel * 10;
            break;

        case wizard:
            player->health = newLevel * 25;
            player->mana = newLevel * 100;
            player->armor = newLevel * 10;
            player->magicResist = newLevel * 50;
            player->attack = newLevel * 10;
            player->magicAttack = newLevel * 100;
            break;

        case rogue:
            player->health = newLevel * 50;
            player->mana = newLevel * 25;
            player->armor = newLevel * 25;
            player->magicResist = newLevel * 10;
            player->attack = newLevel * 100;
            player->magicAttack = newLevel * 50;
            break;
    }

    player->level = newLevel;
}
};

#endif // _PLAYER_H_

