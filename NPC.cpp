// CSE240 Fall 2023
// Darsh Chaurasia

#include "NPC.h"
#include <iostream>
#include <string>

using namespace std;

// Q1 NPC (1 point - added into other class tests)
// NPC() constructor assigns the following default values to class data members
// name: Jimothy
// occupation: Guide
// level: 1
// Health: 1
NPC::NPC()
{
	// Write the code below

	name = "Jimothy";
    occupation = "Guide";
    level = 1;
    health = 1;
}

// Q2 (8 points)
// 1 point for each function. Setters and getters will be tested together. 

// Define all the class member functions.
// While defining member functions, note that these functions will be called using 
// an 'NPC' object which will represent one NPC.
// Example:  NPC p[10]; creates 10 NPC objects
// p[2].setLevel(19); will set 3rd NPC's level to 19

// setName assigns 'name_input' to class data member 'name'
void NPC::setName(string nameInput)
{
	// Write the code below
	name = nameInput;
}

// setOccupation assigns 'occupationInput' to class data member 'occupation'
void NPC::setOccupation(string occupationInput)
{
	// Write the code below
	occupation = occupationInput;
}

// setLevel assigns level_input to class data member 'level'
void NPC::setLevel(int levelInput)
{
	// Write the code below
	level = levelInput;
}

// setHealth assigns 'health_input' to class data member 'health'
void NPC::setHealth(int healthInput)
{
	// Write the code below
	health = healthInput;
}

// getName returns the class data member 'name'.
string NPC::getName()
{
	// Write the code below
	return name;
}

// getOccupation returns the class data member 'occupation'.
string NPC::getOccupation()
{
	// Write the code below
	return occupation;
}

// getLevel returns the class data member 'level'.
int NPC::getLevel()
{
	// Write the code below
	return level;
}

// getHealth returns the class data member 'health'.
int NPC::getHealth()
{
	// Write the code below
	return health;
}

// Provided function
// displayNPC displays the name, occupation, level, and health of the NPC
void NPC::displayNPC()
{
	// Write the code below
	cout << "Name: " << name << endl;
	cout << "Occupation: " << occupation << endl;
	cout << "Level: " << level << endl;
	cout << "Health: " << health << endl;
}
