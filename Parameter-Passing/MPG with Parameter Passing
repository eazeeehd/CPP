/*
At the beginning of a car journey the driver ensures that the car's fuel tank is full 
and records the odometer reading. After the journey he records the new reading and 
how much fuel it took to refill the tank. 
Develop a program which will calculate the fuel consumption.
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

// global variables
//int distance_travelled =0;
//double consumption = 0.0;

// method declerations
void get_readings();
void calculate_consumption(int distance_travelled);
void output_results(double consumption);

// method definitions

int _tmain(int argc, _TCHAR* argv[])
{
	get_readings();
	return 0;
}

void get_readings()
{
	/* prompt for and read in first reading
	 * prompt for and read in second reading
	 * calculate actual miles
	 * call calculate_consumption()
	 */

	// test data to be used
	/*	reading 1 = 4973
	 *  reading 2 = 5423
	 *	450 miles
	 */

	// local variables
	int distance_travelled;
	int reading1 = 0;
	int reading2 = 0;

	cout << "Enter first reading ";
	cin >> reading1;

	cout << "Enter second reading ";
	cin >> reading2;

	distance_travelled = reading2 - reading1;

	// stub test
	//cout << distance_travelled;

	calculate_consumption(distance_travelled);

}// end of get_readings();

void calculate_consumption(int distance_travelled)
{
	/* get amount of top_up fuel
	 * calculate mpg by using amount of fuel / distance travelled
	 * call output_results
	 */

	// local variables
	double consumption;
	double top_up_fuel = 0.0;

	cout << "How much fuel did you top up? ";
	cin >> top_up_fuel;

	consumption = distance_travelled/top_up_fuel;

	output_results(consumption);
}// end of calculate_consumption();

void output_results(double consumption)
{
	cout << "The consumption was " << consumption << endl;
}// end of output_results();
