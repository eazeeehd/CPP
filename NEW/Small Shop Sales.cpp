/*
A program to total the day's sales for a small shop. 
The program should first read the number of sales.

Level 1(Top Level Description)
1. Input number of sales
2. Initialise total
3. Get each sale and add into running total
4. Output results

Level 3
1.1 Print prompt
1.2 Read number of sales
2. set total to 0
3.1 Loopfor count = 1 to number of sales
3.2.1 prompt user for amount
3.2.2 read amount
3.2.3 add amount into total
3.3 Loopend
4.1 Output total sales
*/

#include "stdafx.h"
#include<iostream>

using namespace std;

double total, amount;
int sales, count;

void input();
void initialise();
void get_amount();
void output();

int _tmain(int argc, _TCHAR* argv[])
{
	input();
	return 0;
}

void input()
{
	initialise();
	
	cout << "How many sales has your shop had today? : ";
	cin >> sales;
	get_amount();
}

void initialise()
{
	//sets running total to 0 
	total = 0.0;
}

void get_amount()
{
	for (count = 1; count <= sales; count++)
		{
			cout << "Please type amount : ";
			cin >> amount;
			total = total + amount;
		}
	output();
}

void output()
{
	cout << "Your shop made : " << total << "\n";
}
