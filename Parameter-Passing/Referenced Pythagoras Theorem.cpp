/*. 
Write a program which will input the lengths of three sides of a triangle and
say whether it is right angled or not. 

Use Pythagoras theorem
Square the two shorter sides and add the values together.
Square the longest side (the hypotenuse).
Check if the results for (1) and (2) are the same.
Use three methods/functions. The first will get the input from the user,
the second will perform the calculations/testing and the third will output
the results. */

/* TEST DATA
	longside = 5
	side2 = 4
	side3 = 3
	answer = Right Angle
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

//methods
void input_output();
void check(int longside, int side2, int side3);
void results(double & result1, double & result2);

int _tmain(int argc, _TCHAR* argv[])
{
	system ("cls");
	input_output();
	return 0;
}

void input_output()
{	
	int longside, side2, side3;

	cout << "What is the longest side" << endl;
	cin >> longside;	
	cout << "What is side 2" << endl;
	cin >> side2;
	cout << "What is side 3" << endl;
	cin >> side3;	
	check(longside,side2,side3);
}

void check(int longside, int side2, int side3)
{
	int val1, val2;
	double result1, result2;
	val1 = side2*side2;
	val2 = side3*side3;
	result1 = val1+val2;
	result2 = longside*longside;
	results(result1, result2);
}
void results(double & result1, double & result2)
{
	if(result1 == result2)
	{
		cout << "Both numbers are equal, The Triangle Is Right Angled" << endl;
	}
	else
	{
		cout << "The Triangle Is Not Right Angled" << endl;
	}
}
