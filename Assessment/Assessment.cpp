//Peter Kemley Assessment   |
//01/12/2016                |
//__________________________|

/*
You are required to write a program which carries out both strung functions and number functions.  
The system will have a menu which will present the user with two choices:

Firstly a technician is required to logon using their own name.  This is then displayed through the system

Option 1 will generate a network username in the format of first initial and last name.
The technician will be prompted to enter the first and last name which will be used to create the account in the format.
The name will be entered as Allison Walker and the username generated as awalker.

Option 2 will calculate the factorial of a number entered by the user. 
The factorial of a number is defined a the product of that number and the number which is one 
less than it and the number which is one less than that and ..... down to 1. For example, 
the factorial of 5 ( or 5! as it is correctly written ) is 5 * 4 * 3 * 2 * 1 = 120.
*/

#include "stdafx.h"
#include <iostream>
//used for string variable
#include <string>
//header needed for getch
#include <conio.h>

//using namespace std lets us use console in and console out cout and cin.
using namespace std;

//methods
void main();
void number_function();
void create_name(string username_in);/* Username_in Parameter which holds the value of user from string_function() method and used throughout function create_name()*/
void string_function();
void menu_act_on_choice(int choice_in);
void menu();


//global variables
string tech;//this variable

int _tmain(int argc, _TCHAR* argv[])
{
	//caling main method
	main();
	return 0;
}
/*
Displays options to screen and displays a prompt for input.  
Repeats indefinitely calling menu_act_on_choice until the user select the quit option. 
*/
void main()
{
	//asking the technician for their name
	cout << "Hello Technician Please Enter Your Name: ";
	//reading in the technicians name
	cin >> tech;
	//call the menu
	menu();
}
/*
Displays an output to screen printing the value held in tech variable and message informing that this is option 2.
Prompts user to enter a number and check that it is an integer above the value of zero. 
Then calculates and outputs the factorial of the given number. 
Or prints an error message and returns to the menu()
*/
void number_function()
{
	//creating the variables
	int num, factorial=1;
	//Ask for the number.
    cout << "Enter a number to calculate it's factorial" << endl;  
	//read in number
    cin >> num;
	//start of for loop
    for(int i=1;i<=num;i++)
    {
        factorial=factorial*i;
    }
	//tell the user the factorials
    cout << "Factorial of " << num << " = " << factorial << endl;
	cout << "Press any key to go back to the menu!";
	_getch();
}

/*
Carries out string manipulation on the parameter username.  
It extracts the first character then extracts the text after the space and joins the two to create the username.
*/
void create_name(string username_in)
{
	//creating the local variables
	string firstchar;
	int pos;
	//Finds the first character of the persons name EG. Peter so P
	firstchar.assign(username_in, 0, 1);
	// this finds the position of the character we wish to terminate in 
	// this code we dont want a space as we are creating a username in the format AWalker
	pos = username_in.find(" ");// finds the space in the name to sepperate first name and last name
	//Creates the username by bringing in username_in which has been chopped to the first letter
	firstchar.append(username_in, pos+1, username_in.length()); // append adds to the end of and assign overwrites
	
	// Print name
	 cout << "Your new Username is " << firstchar << endl;
	 cout << "Press any key to return to the menu!";
	_getch();
}

/*
Displays an output to screen printing the value held in tech variable and message informing that this is option 1.
Then prompts for a name to be entered in the box.  
This is in the format of a first name and a last name and is stored in the variable user.
The create_name() method is then called passing the variable username_in as a parameter
*/
void string_function()
{
	//Initialising the variable name
	string name = "";
	//asking the user for their name
	cout << "Please enter your name! ";
	//cin.ignore is used to get rid of the system spaces
	cin.ignore();
	getline(cin, name);
	//calling the variable name to be used in method create name
	create_name(name);
}

/*
Makes use of a select case statement based on the value of choice_in.  
Methods will be called dependent on user input
*/
void menu_act_on_choice(int choice_in)
{
	//switch used for the choices of the menu
	//More efficient than IF
	switch(choice_in)
	{
		//if choice is 1 call string else call number
		case 1:
			string_function();
			break;
		case 2:
			number_function();
			break;
	}// end switch
}

void menu()
{
	//initialising the variable choice
	int choice = 0;
	//start of the do while
	do
	{
		//clearing the screen before menu selection
		system("cls");
		//welcoming the technician by name entered
		cout << "Welcome to the Main Menu " << tech << "!" << endl;
		//outputting a menu for the user to work with
		cout << "Make your selection from the following selections" << endl 
				<< "1.	String function" << endl
				<< "2.	Number function" << endl
				<< "3.	Quit" << endl;

		cout << "> ";
		//reading in the choice from console
		cin >> choice;
		menu_act_on_choice(choice);
	} //run the loop while the choice is not 3 because 3 is the quit option
	while(choice != 3);
}
