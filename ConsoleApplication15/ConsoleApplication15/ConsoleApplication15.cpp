#include <iostream>
#include "windows.h"
#include "math.h"
#include "iomanip"
using namespace std;

int main()
{
	double a, b, c, x, f;
	cout << "Input a:" << endl;
	cin >> a;
	cout << "Input b:" << endl;
	cin >> b;
	cout << "Input c:" << endl;
	cin >> c;
	cout << "Input x:" << endl;
	cin >> x;

	if (c < 0 && a != 0)
		f = (-a * pow(x, 3) - b) / c;
	if (c > 0 && a == 0)
		f = (x - pow(a, 3)) / -c;
	else
		f = a * x + 5 * b;
	cout << setw(8) << setprecision(3) << "F=" << f << endl;
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
