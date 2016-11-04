/*
* Write a program to convert a sum of money in Pounds Sterling into Euros.
* The number of Euros to the Pound should be provided as input to the program.
* Use an exchange rate of 70p to 1€
*/

#include "stdafx.h"
#include <iostream>
#include <iomanip> //NEW iomanip allows the use of input/output manipulation this include the use of setprecision and fixed

using namespace std;

const double convert = 1.42;
void convert_euro();

int _tmain(int argc, _TCHAR* argv[])
{
convert_euro();
return 0;
}

void convert_euro()
{
double pounds;
double euro;
cout << "How much sterling would you like to convert? ";
cin >> pounds;
euro = pounds * convert;
cout << char(156) << fixed << setprecision(2)<< pounds << " gives " << "\u20AC"
<<fixed << setprecision(2)<< euro << endl;
}
