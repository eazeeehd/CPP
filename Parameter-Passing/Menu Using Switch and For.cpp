//Peter Kemley 14/10/2016
//Using Switch
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

//methods
void menu();
void menu_act_on_choice(int choice_in);
void method_option2();
void method_option3_params(int number_in);
//global variables


int _tmain(int argc, _TCHAR* argv[])
{
	menu();
	return 0;
}

void menu()//display options to user and read in number of choice
{
	int choice = 0;

	cout << "Pick a selection using the numbers shown" << endl;
	cout << "1. Code within construct" << endl
	     << "2. Call a method" << endl
	     << "3. Pass a Parameter" << endl
	     << "4. Quit" << endl;
	cout << ":> ";
	
	cin >> choice;
	//call passing the choice option
	menu_act_on_choice(choice);
}//end method
void menu_act_on_choice(int choice_in)
{//will process the value of choice in a swotch statement and take appropriate action
	switch(choice_in)
	{
	case 1: //code within construct
		cout << "Option 1 is outputting the 2 X Table" << endl;
		//function to print 2x tables
		for(int count = 1; count <= 12; count++)
		{
			cout << "2 X " << count << " = " << (2*count) << endl;
		}//end for loop
		break;
	case 2: //Call a method
		cout << "Method 2 can do the 16 X table " << endl;
		system("pause");
		method_option2();
		break;
	case 3: //Passing a parameter
		cout << "Option 3 Passes a Parameter" << endl;
		system("pause");
		method_option3_params(choice_in);//Call the method and pass choice_in as parameter
		break;
	case 4: //close
		cout << "GoodBye ";
		break;
	default:
		cout << "You must press a menu option ";
	}//end switch

}//end method
void method_option2()
{//Method called from menu_act_on_choice
		for(int count = 1; count <= 12; count++)
		{
			cout << "16 X " << count << " = " << (16*count) << endl;
		}//end for loop
}//end method
void method_option3_params(int number_in)
{//calling in a number to times by (Number coming in is choice_in)
	for(int count = 1; count <= 12; count++)
	{
		cout << number_in << " X " << count << " = " << (number_in*count) << endl;
	}//end for loop
}//end method
