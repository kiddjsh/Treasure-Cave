#pragma once
//header.h

#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

// <WK7 status=permanent>
enum gameObjectType
{
	EMPTY, PLAYER, THIEF, TREASURE, MONSTER, WEAPON, TORCH, NOISEMAKER, EYE, CAVE_EXIT // add in week 6
};
// <WK7>

struct gameObject
{
	int row;					// row position of the object
	int column;					// column position of the object
	bool isFound;       		// flag to indicate if the object has been found 
	bool isVisible;     		// flag to indicate if object is seen on the board 
	// <WK7 status=permanent>
	bool isAlive;				// flag to indicate if thief and monster is alive or dead
	// <WK7>
};

struct playerObject
{
	bool alive;         	// flag to indicate if the player is alive or dead
	bool hasWeapon;     	// flag to indicate if the player has the weapon
	bool hasTreasure;   	// flag to indicate if the player has the treasure
	bool hasTorch;      	// flag to indicate if the player has the torch -week 4
	bool hasNoisemaker;		// flag to indicate if the player has the noisemaker -week 4
	// <WK7 status=permanent>
	bool hasEye;                 // flag to indicate if the player has the eye 
	// <WK7>
	gameObject position;	     // variables for row, column and visibility
	// <WK4 status=permanent>
	gameObject oneBackPosition;	 // variables for row, column from the last movement
	gameObject twoBackPosition;	 // variables for row, column from two last movements
	// <WK4>
};
