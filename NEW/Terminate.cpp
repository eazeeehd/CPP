/*	A program  which allows the user to enter a 
 *  sequence of non - zero values terminated by  a 0. 
 *	The average value should be output
 *********************************************************/

#include "stdafx.h"
#include <iostream >

using namespace std;

const int terminator = 0;	
double average, total, number;
int number_of_numbers;

void initialise();
void get_number();
void update_totals();
void calculate_average();


void initialise()
// sets totals to 0 
{
	total= 0.0;
	number_of_numbers = 0;
}


void get_number()
//reads a number from the user 
{
		 
	cout <<"Please type a number  (0 to terminate)";
	cin >> number;
}


void update_totals()
//updates count and number total 
{ 		
	number_of_numbers = number_of_numbers + 1;
	total = total + number;
}


void calculate_average()
{
	average = total / number_of_numbers;
}


void print_results()
// prints out average 
{
	cout <<" The average is " << average << "\n";
}
	

/*void main()
{
	initialise();
	get_number();			// need to get a number to start the loop
	
	if ( number == 0)
	{
		system("Exit");
	}
	else
	{
	 // start the loop - check and carry out rest of code or terminate

		do
		{
			update_totals();
			get_number();

		}// end of loop

		while (number != terminator); // post condition check

		calculate_average();
		print_results();
	}// end else
}*/
 
void main()
{
	initialise();
	get_number();			// need to get a number to start the loop
	
	if(number == 0)
		system("exit");

	else
	{
	// testing at the start

		while(number != terminator)
		{
			update_totals();
			get_number();
		}// end loop

	
		calculate_average();
		print_results();

	}// end else
}
