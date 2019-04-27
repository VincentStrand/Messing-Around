/*This is the begining of a text based game. Hopefully I will be able to add some Rpg elements like stats and character 
classes.
Here is a list of items I would like to implement eventualy, this list may change:

1. character stats

2. inventory

3. random enemies with random stats

4. sudo open world 



TODO:
add story/quest
add ui
be able to use the stats in the text file
be able to use the inventory
add combat with class specific attacks with rng
add class specific actions/attacks

	- The Count of the Bermuda Triangle 2019
*/
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;
void menu();
void charStats();
void mainGame();
void combat();

// Main character information
class charInfo
{
public:
	ofstream outputClass;
	ofstream inventory;
	string name;
	int health = 100;
	string classType;
};
charInfo player;


int main() 
{
	menu();
	//charStats();
	//mainGame();
}

void menu()
{
	string choice;
	cout << "PLAY\tor\tQUIT\n: ";
	getline(cin, choice);
	if (choice == "play")
		charStats();
	if (choice == "quit")
		charStats();
}

void charStats()
{
	system("CLS");
	cout << " WELCOME TO THE GAME " << endl;
	cout << "Please enter you name: ";
	cin >> player.name;
	cout << "\nHello " << player.name << " Nice to meet you\n" << endl;
	cout << "You will now choose your characters stats:\n";
	// Class list
	cout << " 1: Fighter\n 2: Mage\n 3: Bard\n";
	int choice;
	cout << "What class do you want to be?: ";
	cin >> choice;
	if (choice == 1)
	{
		cout << "You chose, Fighter!\n";
		player.classType = "Fighter";
		player.health = 300;
		player.inventory.open("inventory.txt");
		player.inventory << "Sword: 1\nPotion: 2\nShield: 1\n";
		player.inventory.close();
	}

	if (choice == 2)
	{
		cout << "You chose, Mage!\n";
		player.classType = "Mage";
		player.health = 100;
		player.inventory.open("inventory.txt");
		player.inventory << "Staff: 1\nPotion: 10\nSpellbook: 1\n";
		player.inventory.close();
	}

	if (choice == 3)
	{
		cout << "You chose, Bard!\n";
		player.classType = "Bard";
		player.health = 200;
		player.inventory.open("inventory.txt");
		player.inventory << "Sword: 1\nPotion: 2\nInstrument: 1\n";
		player.inventory.close();
	}
	
	cout << "You are a " << player.classType << ", and your name is " << player.name << " and you have " << player.health << " health" <<"." << endl;
	player.outputClass.open("Class.txt");
	player.outputClass << "Name: "<< player.name << "\nHealth: " << player.health << "\nClass: " << player.classType << "\n" << endl;
	player.outputClass.close();
	mainGame();
}

void mainGame()
{
	system("CLS");
	cout << "You are going to attacked by some bandits because you are an alpha tester, good luck!\n";
	string direction;
	getline(cin, direction);
	// later picking a direction will actualy do something
	combat();
}

void combat()
{
	system("CLS");
	// enemyNum will be random later
	int enemyNum = 3;
	// enemyType will be random later
	string enemyType = "Bandits";
	cout << "You have encountered some enemies!\n";
	cout << "The enemies are: " << enemyType << " and there are " << enemyNum << " of them." ;
}


