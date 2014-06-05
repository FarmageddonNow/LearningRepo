#include <iostream>
#include <conio.h>

#include "test.h"

using namespace std;

const double FT2MET = 0.3048;
const double MET2CENT = 100;
const double FT2IN = 12;
const double MET2FT = 1/FT2MET;
const double IN2FT = 1/FT2IN;
const double CENT2MET = 1/MET2CENT;

inline void length_fxn(double& feet, double& inches, double& meters, double& centimeters);
inline void get_input_length2met(double& feet, double& inches);
inline void convert_length2met(double& feet, double& inches, double& meters, double& centimeters);
inline void print_out_length2met(double feet, double inches, double meters, double centimeters);
inline void get_input_length2imp(double& meters, double& centimeters);
inline void convert_length2imp(double& meters, double& centimeters, double& feet, double& inches);
inline void print_out_length2imp(double meters, double centimeters, double feet, double inches);
// Length conversion stuff above

const double KILO2LBS = 2.2046;
const double KILO2GRAMS = 1000;
const double LBS2OZ = 16;
const double LBS2KILO = 1/KILO2LBS;
const double GRAMS2KILO = 1/KILO2GRAMS;
const double OZ2LBS = 1/LBS2OZ;

inline void weight_fxn(double& pounds, double& ounces, double& kilograms, double& grams);
inline void get_input_weight2met(double& pounds, double& ounces);
inline void convert_weight2met(double& pounds, double& ounces, double& kilograms, double& grams);
inline void print_out_weight2met(double& pounds, double& ounces, double& kilograms, double& grams);
inline void get_input_weight2imp(double& kilograms, double& grams);
inline void convert_weight2imp(double& kilograms, double& grams, double& pounds, double& ounces);
inline void print_out_weight2imp(double& kilograms, double& grams, double& pounds, double& ounces);
// Weight conversion stuff

int main()
{
	//myTestFunction();
	//_getch();
	//return 0;
	// Note: include above code if you want to write new projects to test.cpp 

	double a, b, y, z;
	// Variables 'a' and 'b' are numbers to be converted. Variables 'y' and 'z' are converted outputs. 
	// Rahul: Should instead declare these as local variables within functions at lowest levels possible. Declare variables right before you use them. 
	// Wouldn't have mattered for this program though
	
	int choice;

	cout << "You're here because you're too stupid to do unit conversions on your own. Let's get started dumbtard!" << endl;

	do
	{
		while(true)
		{
			cout << "What kind of units do you want to convert?" << endl << "(1) Length" << endl << "(2) Weight" << endl;
			cin >> choice;
			if( choice < 1 || choice > 2 )
			{
				cout << "Please enter a valid value\n";
			}
			else
			{
				break;
			}
		}

		if (choice == 1)
		{
			length_fxn(a, b, y, z);
		}
		else if (choice == 2)
		{
			weight_fxn(a, b, y, z);
		}
		while(true)
		{
			cout << "Would you like to convert some more figures?" << endl << "(1) Yes" << endl << "(2) No" << endl;
			cin >> choice;
			if ((choice < 1) && (choice > 2))
			{
				cout << "That's not a valid number." << endl;
			}
			else
			{
				break;
			}
		}
	} while (choice == 1);
	
	_getch();
	return 0;
}

void length_fxn(double& feet, double& inches, double& meters, double& centimeters)
{
	int choice;
	
	cout << "Select one conversion type:" << endl << "(1) Imperial to Metric" << endl << "(2) Metric to Imperial" << endl;
	cin >> choice;
	while(true)
	{	
		if (choice == 1)
		{
			get_input_length2met(feet, inches);
			convert_length2met(feet, inches, meters, centimeters);
			print_out_length2met(feet, inches, meters, centimeters);
			break;
		}
		else if (choice == 2)
		{
			get_input_length2imp(meters, centimeters);
			convert_length2imp(meters, centimeters, feet, inches);
			print_out_length2imp(meters, centimeters, feet, inches);
			break;
		}
		else
		{
			cout << "Invalid choice. Now, butt twerk!" << endl;
		}
	}
}
void get_input_length2met(double& feet, double& inches)
{
	cout << "Give me your numbers in feet and inches, respectively.\n";
	cin >> feet >> inches;
	return;
}
void convert_length2met(double& feet, double& inches, double& meters, double& centimeters)
{
	meters = feet*FT2MET + (inches*(IN2FT)*FT2MET);
	centimeters = meters*MET2CENT;
	return;
}
void print_out_length2met(double feet, double inches, double meters, double centimeters)
{
	cout << feet << " feet and " << inches << " inches are equivalent to " << meters << " meters (i.e., " << centimeters << " centimeters)." << endl;
}
void get_input_length2imp(double& meters, double& centimeters)
{
	cout << "Give me your numbers in meters and centimeters, respectively.\n";
	cin >> meters >> centimeters;
}
void convert_length2imp(double& meters, double& centimeters, double& feet, double& inches)
{
	feet = (meters + (centimeters*CENT2MET))*MET2FT;
	inches = feet*FT2IN;
}
void print_out_length2imp(double meters, double centimeters, double feet, double inches)
{
	cout << meters << " meters and " << centimeters << " centimeters are equivalent to " << feet << " feet (i.e., " << inches << " inches)." << endl;
}

void weight_fxn(double& pounds, double& ounces, double& kilograms, double& grams)
{
	int choice;
	
	cout << "Select one conversion type:" << endl << "(1) Imperial to Metric" << endl << "(2) Metric to Imperial" << endl;
	cin >> choice;
	while(true)
	{	
		if (choice == 1)
		{
			get_input_weight2met(pounds, ounces);
			convert_weight2met(pounds, ounces, kilograms, grams);
			print_out_weight2met(pounds, ounces, kilograms, grams);
			break;
		}
		else if (choice == 2)
		{
			get_input_weight2imp(kilograms, grams);
			convert_weight2imp(kilograms, grams, pounds, ounces);
			print_out_weight2imp(kilograms, grams, pounds, ounces);
			break;
		}
		else
		{
			cout << "Invalid choice. Now, butt twerk!" << endl;
		}
	}
}

void get_input_weight2met(double& pounds, double& ounces)
{
	cout << "Give me your numbers in pounds and ounces, respectively.\n";
	cin >> pounds >> ounces;
	return;
}
void convert_weight2met(double& pounds, double& ounces, double& kilograms, double& grams)
{
	kilograms = (pounds + (ounces*OZ2LBS))*LBS2KILO;
	grams = kilograms*KILO2GRAMS;
	return;
}
void print_out_weight2met(double& pounds, double& ounces, double& kilograms, double& grams)
{
	cout << pounds << " pounds and " << ounces << " ounces are equivalent to " << kilograms << " kilograms (i.e., " << grams << " grams)." << endl;
}
void get_input_weight2imp(double& kilograms, double& grams)
{
	cout << "Give me your numbers in kilograms and grams, respectively.\n";
	cin >> kilograms >> grams;
	return;
}
void convert_weight2imp(double& kilograms, double& grams, double& pounds, double& ounces)
{
	pounds = (kilograms + (grams*GRAMS2KILO))*KILO2LBS;
	ounces = pounds*LBS2OZ;
	return;
}
void print_out_weight2imp(double& kilograms, double& grams, double& pounds, double& ounces)
{
	cout << kilograms << " kilograms and " << grams << " grams are equivalent to " << pounds << " pounds (i.e., " << ounces << " ounces)." << endl;
}