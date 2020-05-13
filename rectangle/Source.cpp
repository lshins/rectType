#include <iostream>
#include <iomanip>
#include "rectangleType.h"

using namespace std;

int main()
{
	cout << showpoint << fixed << setprecision(2);
	cout << "Welcome to the rectangleType Overloading Program!" << endl;
	rectangleType rectangle1(5, 3), rectangle2(2, 7), rectangle5;
	rectangle1.print();
	rectangle2.print();
	++rectangle1;
	--rectangle2;
	rectangle1.print();
	rectangle2.print();
	rectangleType rectangle3, rectangle4;
	rectangle3 = rectangle1 + rectangle2;
	rectangle4 = rectangle1 * rectangle2;
	if (rectangle4 != rectangle2)
		cout << "Rectangle 4 and Rectangle 2 do not have the same dimensions." << endl << endl;
	rectangle3 = rectangle1;
	if (rectangle3 == rectangle1)
		cout << "Rectangle 3 and Rectangle 1 have the same dimensions." << endl;
	rectangle1.print();
	rectangle4.print();
	rectangle5 = rectangle1 + (rectangle4++);
	rectangle4.print();
	rectangle5.print();
	return 0;
}