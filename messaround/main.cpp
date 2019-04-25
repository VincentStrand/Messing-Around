/*This is the begining of a text based game. Hopefully I will be able to add some Rpg elements like stats and character 
classes.
Here is a list of items I would like to implement eventualy, this list may change:

1. character stats

2. inventory

3. random enemies with random stats

4. sudo open world 

*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void menu();
void charStats();

// Main character information
class charInfo
{
public:
	string name;
	int health = 100;
	string classType;
};
charInfo player;
fstream outputClass;

int main() 
{
	menu();
	charStats();
}

void menu()
{
	cout << " WELCOME TO THE GAME " << endl;
	cout << "Please enter you name: ";
	cin >> player.name;
	cout << "\nHello " << player.name << " Nice to meet you\n" << endl;
}

void charStats()
{
	
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
	}

	if (choice == 2)
	{
		cout << "You chose, Mage!\n";
		player.classType = "Mage";
		player.health = 100;
	}

	if (choice == 3)
	{
		cout << "You chose, Bard!\n";
		player.classType = "Bard";
		player.health = 200;
	}
	
	cout << "You are a " << player.classType << ", and your name is " << player.name << " and you have " << player.health << " health" <<"." << endl;
	outputClass.open("Class.txt");
	outputClass << player.name << "\n" << player.health << "\n" << player.classType << "\n" << endl;
	outputClass.close();
}

