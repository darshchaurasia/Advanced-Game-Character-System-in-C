#include "player.h"

// definitions of Player member functions
Player::Player(string playerName, int levelInput, playerType archetypeInput)
{
	name = playerName;
	level = levelInput;
	archetype = archetypeInput;
	// Stats are based on archetype and level
	if(archetype == warrior){
		health = level * 100;
		mana = level * 10;
		armor = level * 50;
		magicResist = level * 25;
		attack = level * 50;
		magicAttack = level * 10;
	}
	else if(archetype == wizard){
		health = level * 25;
		mana = level * 100;
		armor = level * 10;
		magicResist = level * 50;
		attack = level * 10;
		magicAttack = level * 100;
	}
	else if(archetype == rogue){
		health = level * 50;
		mana = level * 25;
		armor = level * 25;
		magicResist = level * 10;
		attack = level * 100; 
		magicAttack = level * 50;
	}
}

string Player::getName(){
	return name;
}

int Player::getHealth(){
	return health;
}

int Player::getMana(){
	return mana;
}

int Player::getArmor(){
	return armor;
}

int Player::getMagicResist(){
	return magicResist;
}

int Player::getAttack(){
	return attack;
}

int Player::getMagicAttack(){
	return magicAttack;
}

int Player::getLevel(){
	return level;
}

playerType Player::getPlayerType(){
	return archetype;
}
