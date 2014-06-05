#include <iostream>
#include <conio.h>
using namespace std;

double unitprice(int diameter, double price);

int main()
{
	int diameter_small, diameter_large;
	double price_small, price_large, unitprice_small, unitprice_large;

	cout << "What is the diameter of the smaller pizza?\n";
	cin >> diameter_small;
	cout << "What is the price of the smaller pizza?\n";
	cin >> price_small;
	cout << "What is the diameter of the larger pizza?\n";
	cin >> diameter_large;
	cout << "What is the price of the larger pizza?\n";
	cin >> price_large;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2); 
	cout << "Small Pizza:\n" 
		 << "Diameter = " << diameter_small << " inches\n"
		 << "Price = $" << price_small << endl
		 << "Price per square inch = $" << unitprice(diameter_small, price_small) << endl
		 << "Large Pizza:\n" 
		 << "Diameter = " << diameter_large << " inches\n"
		 << "Price = $" << price_large << endl
		 << "Price per square inch = $" << unitprice(diameter_large, price_large) << endl;
	
	if (unitprice(diameter_large, price_large) < unitprice(diameter_small, price_small))
		cout << "The large one is the better buy.\n";
	else
		cout << "The small one is the better buy.\n";
	
	_getch();
	return 0;
}

double unitprice(int diameter, double price)
{
	const double PI = 3.14159;
	double radius;
	radius = diameter/static_cast<double>(2);
	return (price/(PI*radius*radius));
}