//Peter Kemley 30/09/2016
#include "stdafx.h"
#include <iostream>

using namespace std;
//int tempF = 0;
//int temp = 0;
void input_temps(); 
void convert_to_F(int temp);                                  //ADD PARAMETERS
void output_result(int tempF);

void main()
{	
	input_temps();
	//output_result(); called elsewhere	
}

void input_temps()
{
	int temp = 0;
	cout << "Enter temperature: ";
	cin >> temp;

	convert_to_F(temp);
}

void convert_to_F(int temp) // add parameter //local variable for tempF
{
	int tempF;
	tempF = temp * 9/5 + 32;
	//call output
	output_result(tempF);
}

void output_result(int tempF) //add parameter
{
	cout << "The temperature converted to Farenheit is " << tempF << endl;
}

