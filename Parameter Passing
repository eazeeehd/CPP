//Peter Kemley 30/09/2016
//includes
#include "stdafx.h"
#include <iostream>
#include <string>

//namespace
using namespace std;

//methods
void start1();
void start2();
void parameter(string s1, string s2, int num1, int num2);

//global variables


int _tmain(int argc, _TCHAR* argv[])
{
	start1();
	start2();
	return 0;
}

void start1()
{
	//2 string variables declared locally
	//2 number variables declared locally
	//pass all to parameter method
	string name1 = "Peter", name2 = "Kemley";
	int number1 = 100, number2 = 200;
	parameter(name1, name2, number1, number2);
}

void start2()
{
	//2 string variables declared locally
	//2 number variables declared locally
	//pass all to parameter method
	string st1 = "Liam", st2 = "Martin";
	int n1 = 1200, n2 = 3200;
	parameter(st1, st2, n1, n2);
}

void parameter(string s1, string s2, int num1, int num2)
{
	//string 1 and string 2 will be joined
	//num1 and num2 will be multiplied together
	s1.append(" ");
	s1.append(s2);
	cout << s1 << endl;
	cout << num1*num2 << endl;
}
