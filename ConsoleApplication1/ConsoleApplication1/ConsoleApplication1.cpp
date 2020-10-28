#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	int x;
	cout << "Enter month number\n";
	cin >> x;

	switch (x)
	{
	case 1: cout << "Winter"; break;
	case 2: cout << "Winter"; break;
	case 3: cout << "Spring"; break;
	case 4: cout << "Spring"; break;
	case 5: cout << "Spring"; break;
	case 6: cout << "Summer"; break;
	case 7: cout << "Summer"; break;
	case 8: cout << "Summer"; break;
	case 9: cout << "Autumn"; break;
	case 10: cout << "Autumn"; break;
	case 11: cout << "Autumn"; break;
	case 12: cout << "Winter"; break;
	default: cout << "Does not exist"; break;
	}

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
