//Program that prompts for a number and writes 'Happy Birthday' that number of times

#include "stdafx.h"
#include <iostream>

using namespace std;

int count, age;

void get_age();
void print_message();

void main()
{
 get_age();
}
void get_age()
{
 cout << "How old are you today? ";
 cin >> age;
 print_message();
}

void print_message()
{
 for (count = 1; count <= age; count++)

 cout << "Happy Birthday" << "\n";
}
