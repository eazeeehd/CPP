//Peter Kemley, 07/10/2016
//Calculations passed by reference
#include "stdafx.h"
#include <iostream>

using namespace std;

//methods
void input_output();
void add(int num1_in, int num2_in, double & answer_out);
void subtract(int num1_in, int num2_in, double & answer_out);
void multiply(int num1_in, int num2_in, double & answer_out);
void divide(int num1_in, int num2_in, double & answer_out);

int _tmain(int argc, _TCHAR* argv[])
{
	system ("cls");
	input_output();
	return 0;
}

void input_output()
{	
	////////////////////////////////////////////////////////        //////////////////////////////////////////////////////// 
	//Takes 2 numbers - user prompted to enter            //        //add 57+24 = 81				     //				 //
	//initially hard coded				      //        //subtract 57-24 = 33			TESTDATA    //
	//call a method to process numbers		      //	//multiply 57*24 = 1368				   //
	//user will be asked to chose what process they want  //	//divide 57/24 = 2.375				  //
	////////////////////////////////////////////////////////	///////////////////////////////////////////////////
	int num1, num2;
	double answer;
	int user;
	cout << "What is the first Number you would like to use" << endl;
	cin >> num1;
	cout << "What is the second Number you would like to use" << endl;
	cin >> num2;

	cout << "What Operation would you like to use - Pick a selection using the numbers shown" << endl;
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
	
	cin >> user;
	//do{
	if (user == 1)
	{
		//add
		add(num1, num2, answer);
		cout << num1 << " + " << num2 << endl;
		cout << "The Result is: " << answer << endl;
	}
	else if (user == 2)
	{
		//subtract
		subtract(num1, num2, answer);
		cout << num1 << " - " << num2 << endl;
		cout << "The Result is: " << answer << endl;
	}
	else if (user == 3)
	{
		//multiply
		multiply(num1, num2, answer);
		cout << num1 << " x " << num2 << endl;
		cout << "The Result is: " << answer << endl;
	}
	else if (user == 4)
	{
		//divide
		divide(num1, num2, answer);
		cout << num1 << " / " << num2 << endl;
		cout << "The Result is: " << answer << endl;
	}
	else
	{
	    cout << "Your Selection was not an option please try again" << endl;	
	}
}//while((user >=1)&&(user <=4));

void add(int num1_in, int num2_in, double & answer_out)
{
	answer_out = num1_in + num2_in;
}

void subtract(int num1_in, int num2_in, double & answer_out)
{
	answer_out = num1_in - num2_in;
}

void multiply(int num1_in, int num2_in, double & answer_out)
{
	answer_out = num1_in * num2_in;
}

void divide(int num1_in, int num2_in, double & answer_out)
{
	answer_out = num1_in /(double)num2_in;
}
