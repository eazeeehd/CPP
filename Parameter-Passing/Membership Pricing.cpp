//Peter Kemley 14/10/2016
//membership pricing
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//methods
void display_menu();
void menu_act_on_choice(int choice_in);
void junior_senior(int age_range);
void adult();
void honorary();
//global variables


int _tmain(int argc, _TCHAR* argv[])
{
	system("cls");
	display_menu();
	return 0;
}
void display_menu()//display options to user and read in number of choice
{
	int choice = 0;

	cout << "Enter choice that relates to your age range: " << endl;

	cout << "1. Junior 0-16" << endl
	     << "2. Adult 17-54" << endl
	     << "3. Seniors 55-80" << endl
	     << "4. Honarary 81+" << endl;
	cout << ":> ";
	
	cin >> choice;
	//call passing the choice option
	menu_act_on_choice(choice);
}//end method

void menu_act_on_choice(int choice_in)
{//will process the value of choice in a swotch statement and take appropriate action
/*
0 to 16 (Juniors) are charged at half rate £125
17 to 54 (Adult) are charged at full rate £250
55 to 80 (Seniors) are charged at half rate £125
81 and over (Honorary) are free */

	switch(choice_in)
	{
	case 1: //code within construct
		junior_senior(choice_in);
		break;
	case 2: //Call a method
		adult();
		break;
	case 3: //Passing a parameter
		junior_senior(choice_in);
		break;
	default:
		honorary();
	}//end switch

}//end method
void junior_senior(int age_range)
{//Method called from menu_act_on_choice
	if(age_range == 1)
	cout << "You Have Selected Junior!" << endl
		 << "The Price for an Junior is: " << char(156) << "125" << endl;
	else
	{
	cout << "You Have Selected Senior!" << endl
		 << "The Price for an Senior is: " << char(156) << "125" << endl;
	}
}//end method
void adult()
{//calling in a number to times by (Number coming in is choice_in)
	cout << "You Have Selected Adult!" << endl
		 << "The Price for an Adult is: " << char(156) << "250" << endl;
}//end method
void honorary()
{
		cout << "You Have Selected Honorary!" << endl
			 << "There is no fee for Honorary Members!" << endl;
}
