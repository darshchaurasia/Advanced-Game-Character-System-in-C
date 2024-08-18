#include <string>
using namespace std;

class NPC {
private:
	string name;		// data members
	string occupation;
	int level, health;


public:
	NPC();			 // constructor

	// member functions. Function definition in NPC.cpp
	void setName(string nameInput);
	void setOccupation(string occupationInput);
	void setLevel(int levelInput);
	void setHealth(int healthInput);
	string getName();
	string getOccupation();
	int getLevel();
	int getHealth();
	void displayNPC();
};

#pragma once
