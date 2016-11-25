//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//methods
void main();
void number_function();
void create_name(string username_in);
void string_function();
void menu_act_on_choice(int choice_in);
void menu();


//global variables
string tech;

int _tmain(int argc, _TCHAR* argv[])
{
	main();
	return 0;
}

void main()
{
	menu();
}

void number_function()
{
	cout << "THIS IS THE NUMBER FUNCTION" << endl;
}

void create_name(string username_in)
{
	
}

void string_function()
{
	cout << "THIS IS THE STRING FUNCTION" << endl;
}

void menu_act_on_choice(int choice_in)
{
	if(choice_in == 1)
	string_function();
	else if (choice_in == 2)
	number_function();
	else
	cout << "INVALID ENTRY" << endl;
}

void menu()
{
	int choice = 0;
	cout << "Pick an option to get started" << endl;
	cout << "Press number 1 for the string function" << endl;
	cout << "Press number 2 for the number function" << endl;
	cin >> choice;

	menu_act_on_choice(choice);
}

/* HELP FOR PASSWORD BIT
            cout << "Enter your username" << endl;
			cin >> username;
            
			cout << "Enter your password" << endl;
			cin >> password;

            if (username == "Gillian" && pass == "Gillian")
                cout >> "Welcome Gillian!  Ready to start your PC?" >> endl;
            else if (username == "Natalie" && pass == "Natalie")
                cout >> "Welcome Natalie !  Ready to display your Files?" >> endl;
            else
                cout >> "Sorry, I don't recognize you" >> endl;

				*/



/* OPTION 1#
Option 1 will generate a network username in the format of first initial and last name.  
The technician will be prompted to enter the first and last name which will be used to create the account in the format.  
The name will be entered as Allison Walker and the username generated as awalker.

OPTION 2 
Option 2 will calculate the factorial of a number entered by the user.  
The factorial of a number is defined a the product of that number and 
the number which is one less than it and the number which is one less than that and ..... 
down to 1. For example, the factorial of 5 ( or 5! as it is correctly written ) is 5 * 4 * 3 * 2 * 1 = 120.

The menu is required to run until the user enters the quit option


You will write the program as a standalone application.

*/
