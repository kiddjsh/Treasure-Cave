# Treasure-Cave
Treasure Cave is a text-based maze style adventure game, played out a 2D model board (or virtual map), taking  place in a dark mysterious cave of an unknown location. Rumors spread of a treasure beyond your wildest dream  guarded by a gruesome monster, while seekers go searching and never return. The cave is rumored to hold  weapons of other adventures who never returned; a sword, a torch, a noise maker and a magical eye; as well as  a monster, a treasure and an elusive enemy. To win, you must find the treasure and exit the cave. If the  monster kills you, you lose.

# Design Goals
The game aims to achieve the following goals:
1. Establish the Treasure Cave and familiarize players with the game play and events
    of Treasure Cave.
2. Serve as a prototype and first level of an ongoing serialized 2D adventure style game.
3. Develop a fun gameplay experience, based on:
a. Discovery – player discovers the cave, obstacles, and treasure that awaits.
b. Power – the game is about finding the treasure, fighting your enemies and   
    emerging victorious through several battles.

# Target Market
The ideal user has the following characteristics:
1.	Male or Female
2.	8+ years old
3.	Likes games
4.	Plays mobile games

# Game Flow
Actions that the player can perform are:
1.	Move west (a) and east (d).
2.	Move north (w) and south (s).
3.	Make an irritating noise (n).
4.	Attack once.
5.	Quit game (x).

# Game Objects
A list of things that can be found in the cave:
1.	Weapon
2.	Torch
3.	Noisemaker
4.	Eye
5.	Thief
6.	Monster
7.	Treasure
8.	Cave Exit

# Character
Adventurer: Sword – wielding warrior that feels no pain, is fearless in the face of the enemy and can withstand tremendous punishment.

# Enemies
Enemies appear on screen from either the top, bottom, right or left side.
1.	Thief:
    a.	Enemy will start in a specific position within the cave.
    b.	Enemy will be invisible to the player at the start of game.
    c.	Enemy will be invisible to player if Torch is found.
    d.	Enemy is only visible to the player if the Eye is found.
    e.	With each move of the player, thief will make a random move.
    f.	Enemy will attack player as soon as player is in range. 
        i.	If player dies when attacked game is over.
    g.	Enemy can attack monster if encountered. 
        i.	If thief or monster dies, game continues.
    h.	Enemy can find treasure. 
        i.	If found game is over.

2.	Monster:
a.	Enemy will be positioned within the cave along with the treasure.
b.	Enemy will be invisible to the player at the start of game.
c.	Enemy will be visible to player if Torch is found.
d.	Enemy will be visible to the player if the Eye is found before Torch.
e.	Enemy will stop moving if noise maker is found and used. 
i.	The enemy will stop for at least one turn, 
   then has 1 out of 3 chances to move again.
f.	With each move of the player, enemy will make a move around the treasure.
g.	Enemy will attack player as soon as player is in range. 
i.	If player finds monster and has no weapon, 
   player will move back two spaces.
ii.	If monster finds player and player has no weapon, player dies, game over.
iii.	If player has weapon and dies when attacked game is over.
h.	Thief can attack monster if encountered. 
i.	If thief or monster dies, game continues.
i.	Monster cannot interact with treasure.


