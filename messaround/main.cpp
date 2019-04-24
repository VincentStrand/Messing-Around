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

void menu();
void charStats();

using namespace std;
int main() 
{
	menu();
	charStats();
}

void menu()
{
	cout << " WELCOME TO THE GAME " << endl;
	string name;
	cout << "Please enter you name: ";
	getline(cin, name);
	cout << "\nHello " << name << " Nice to meet you\n" << endl;
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
		cout << "You chose, Fighter!";
	}

	if (choice == 2)
	{
		cout << "You chose, Mage!";
	}

	if (choice == 3)
	{
		cout << "You chose, Bard!";
	}
}

