/*
* Write a program to input a measurement in centimetres and output the
* equivalent measurement in inches (1 inch is 2.54 centimeters ).
* Modify the program to work in the opposite way (inches to centimeters)
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

const double cms = 2.54;

void inch_to_cm();
void cm_to_in();

int _tmain(int argc, _TCHAR* argv[])
{
inch_to_cm();
cm_to_in();
return 0;
}

void inch_to_cm()
{
double inches;
double cm;
cout << "Enter a measurement in inches: ";
cin >> inches;
cm = inches * cms;
cout << inches << " inches converted to centimetres is " << cm << " cm" << endl;
}

void cm_to_in()
{
double inches;
double cm;
cout << "Enter a measurement in centimetres: ";
cin >> cm;
inches = cm / cms;
cout << cm << " centimetres converted to inches is " << inches << " inches" <<
endl;
}
