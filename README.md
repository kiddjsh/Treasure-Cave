# Game Design Document




# Treasure-Cave
Treasure Cave is a text-based maze style adventure game, played out a 2D model board (or virtual map), taking  place in a dark mysterious cave of an unknown location. Rumors spread of a treasure beyond your wildest dream  guarded by a gruesome monster, while seekers go searching and never return. The cave is rumored to hold  weapons of other adventures who never returned; a sword, a torch, a noise maker and a magical eye; as well as  a monster, a treasure and an elusive enemy. To win, you must find the treasure and exit the cave. If the  monster kills you, you lose.-

![Game Start](https://raw.githubusercontent.com/kiddjsh/Treasure-Cave/main/images/Game%20Start.PNG)

# Design Goals
The game aims to achieve the following goals:
1. Establish the Treasure Cave and familiarize players with the game play and events
    of Treasure Cave.
2. Serve as a prototype and first level of an ongoing serialized 2D adventure style game.
3. Develop a fun gameplay experience, based on:
    - Discovery – player discovers the cave, obstacles, and treasure that awaits.
    - Power – the game is about finding the treasure, fighting your enemies and   
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
    - Enemy will start in a specific position within the cave.
    - Enemy will be invisible to the player at the start of game.
    - Enemy will be invisible to player if Torch is found.
    - Enemy is only visible to the player if the Eye is found.
    - With each move of the player, thief will make a random move.
    - Enemy will attack player as soon as player is in range. 
      - If player dies when attacked game is over.
    - Enemy can attack monster if encountered. 
      - If thief or monster dies, game continues.
    - Enemy can find treasure. 
      - If found game is over.

2.	Monster:
    - Enemy will be positioned within the cave along with the treasure.
    - Enemy will be invisible to the player at the start of game.
    - Enemy will be visible to player if Torch is found.
    - Enemy will be visible to the player if the Eye is found before Torch.
    - Enemy will stop moving if noise maker is found and used. 
      - The enemy will stop for at least one turn, 
        then has 1 out of 3 chances to move again.
    - With each move of the player, enemy will make a move around the treasure.
    - Enemy will attack player as soon as player is in range. 
      - If player finds monster and has no weapon, 
        player will move back two spaces.
      - If monster finds player and player has no weapon, player dies, game over.
      - If player has weapon and dies when attacked game is over.
    - Thief can attack monster if encountered. 
      - If thief or monster dies, game continues.
    - Monster cannot interact with treasure.


# Responses
The following are list of responses that the player may encounter during game play:
1. “You have moved to position {Row}{Column},” Used whenever the player has successfully moved to a new location using a move command. 
2. “You cannot walk through walls.” Used whenever the player tries to move off the board.
3. “You have found the {Object}.” Used when the player finds the weapon, noisemaker, torch, or eye.
4. “You make an irritating noise.” Used when the player uses the n command if he or she has found the noisemaker. This command also stops the monster for a random but short amount of time.
5. “You make a feeble whimper.” Used when the player uses the n command but hasn’t found the noisemaker.
6. “You have been eaten by a Grue! Game over.” Used when the player is killed by the monster.
7. “You are attacked but slay the monster with your weapon.” Used when the player kills the monster.
8. “You managed to survive the monster’s attack.” Used when neither the player nor the monster are killed during combat.
9. “You have found the Treasure. Great job! Game over.” Used when the player is in the same position as the treasure.

# Pseudocode
![Pseudocode](https://raw.githubusercontent.com/kiddjsh/Treasure-Cave/main/images/Pseudocode.PNG)

# Game Play

Player finds torch, reveals all objects except thief and eye
![Player Finds Torch](https://raw.githubusercontent.com/kiddjsh/Treasure-Cave/main/images/Player%20Finds%20Torch.PNG)

Player has no weapon, finds monster, moves back two spaces
![Player Finds Monster](https://raw.githubusercontent.com/kiddjsh/Treasure-Cave/main/images/Player%20Finds%20Monster.PNG)


Player finds weapon

![Player Finds Weapon](https://raw.githubusercontent.com/kiddjsh/Treasure-Cave/main/images/Player%20Finds%20Weapon.PNG)


Player finds eye, reveals location of thief

![Player Finds Eye](https://raw.githubusercontent.com/kiddjsh/Treasure-Cave/main/images/Player%20Finds%20Eye.PNG)


Thief kills monster

![Thief Kills Monster](https://raw.githubusercontent.com/kiddjsh/Treasure-Cave/main/images/Thief%20Kills%20Monster.PNG)


Player kills thief

![Player Kills Thief](https://raw.githubusercontent.com/kiddjsh/Treasure-Cave/main/images/Player%20Kills%20Thief.PNG)


Player finds treasure, game over

![Player Finds Treasure](https://raw.githubusercontent.com/kiddjsh/Treasure-Cave/main/images/Player%20Finds%20Treasure.PNG)


