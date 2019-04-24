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
