/*	A small program is required to demonstrate a range of string functions.  
This will be a menu driven system which will allow the user to enter an option and to then be taken to the 
function which will allow them to enter data and for the operation to be performed on that data.

   1.	count the number of characters in a string
   2.	generate a new name
   3.	compare the value of two strings
   4.	quit
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>  // needed for count function for counting chars
#include <conio.h> //needed for _getch

using namespace std;

// method declerations

void display_menu();
void menu_act_on_choice(int choice_in);
void count_chars();
void string_compare();
void name_details();
void generate_and_display_name(string name_in);


int _tmain(int argc, _TCHAR* argv[])
{
	display_menu();

	return 0;
}


void display_menu()
{
	/*	
	  do
		display menu options
		prompt for and read value for choice
    		if choice <> 4 (quit option)
				call menu_act_on_choice passing value of choice
    while choice is not equal to 4 (quit option)
`*/
	// local variables
	int choice = 0;

	do
	
	{
		system("cls");

		cout << "Make your selection form the following options" << endl 
			<< "1.	count the number of characters in a string" << endl
			<< "2.	generate a new name" << endl
			<< "3.	compare the value of two strings" << endl
			<< "4.	quit" << endl;

		cout << "> ";

		cin >> choice;

		menu_act_on_choice(choice);

	} while(choice != 4);
}

void menu_act_on_choice(int choice_in)
{

	switch(choice_in)
	{
		case 1:
			count_chars();
			break;
		case 2:
			name_details();
			break;
		case 3:
			string_compare();
			break;
	}// end switch

}

void count_chars()
{
	/*
		promt user to enter a string of words
		using getline read in the string (ignore white space)
		display the string and number of characters
		prompt user to enter a character
		count the number of occurrances of the character
		print the number of occurrances of the character

		*/
	// local variables
	string user_input = " ";
	int occurrance = 0;
	char search_char = ' ';

	cout << "Enter a series of words: ";
	cin.ignore();
	getline(cin, user_input);

	// code here
	cout << user_input << " Contains " << user_input.length() << " Characters!" << endl; 

	cout << "Enter a search character: ";
	cin >> search_char;

	// code here
	// using algorithm library for count function begin and end - assign to occurrance
	occurrance = count(user_input.begin(), user_input.end(), search_char);

	cout << "the character " << search_char << " occurred "<< occurrance << " times" << endl;

	cout << "Press any key to return to the menu!";
	_getch();
}

void string_compare()
{
	/*
		promt the user to enter two words 
		using getline read into the first string (ignore white space)
		
		promt the user to enter two words 
		using getline read into the second string 

		if the strings are the same 
			print same message
		else
			print not the same message
	*/


	// local variables
	
	string s1 = "", s2 = "";
	cout << "Enter first string!";
	cin.ignore(); //ignore white space from calliong method within loop
	getline(cin, s1);
	
	cout << "Enter second string!";
	//no cin.ignore as this is directly accessed from the code
	getline(cin, s2);
	
	if(s1.compare(s2) == 0)
		cout << "The Values entered are the same!" << endl;
	else
		cout << "The Values entered are different!" << endl;

	cout << "Press any key to return to the menu!";
	_getch();
}
void name_details()
{
	
		/*
		prompt for first name and second name
		using getline read in name in format first name and last name
		ignore white space
		call create_name() passing name as parameter
		*/

	// local variable
	string name = "";
	cout << "Please enter your name! ";
	cin.ignore();
	getline(cin, name);

	generate_and_display_name(name);
}
void generate_and_display_name(string name_in)
{
	/*Carries out string manipulation on the parameter username.  
	It extracts the first character then extracts the text after 
	the space and joins the two to create the username.
	*/

	// local varibles

	string string1;
	int position;
	string string2;

	// add first char to string 1
	string1.assign(name_in, 0, 1);
	// find proition of space character
	position = name_in.find(" ");// finds the space in the name to sepperate first and last
	// assign lastname to string 2, position +1 to end of string
	string2.assign(name_in, position+1, name_in.length());
	//concatenate both strings
	string1.append(string2); // append adds to the end of and assign overwrites
	
	// Print name
	 cout << "The new name is " << string1 << endl;
	 cout << "Press any key to return to the menu!";
	_getch();

}
