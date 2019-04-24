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

using namespace std;
int main() 
{
	string name;
	cout << "Please enter you name: ";
	getline(cin, name);
	cout << "\nHello " << name << " Nice to meet you" << endl;
}
