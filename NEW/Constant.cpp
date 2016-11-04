/*
* A joiner requires to cut three shelves which are 2 feet 8 inches long.
* Write a program which does the following
* Calculates the total length in meters
* Calculates the number of planks that require to be purchased
* given that each plank is sold in lengths of 150cm
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

const double cms = 2.54;

void num_planks();

int _tmain(int argc, _TCHAR* argv[])
{
num_planks();
return 0;
}

void num_planks()
{
int planks = 3;
int length = (2 * 12 ) + 8;
int plank_lengths;
cout <<" total length of plank required in inches " << length << endl;
cout << "total length of plank required " << length * cms << " cm" << endl;
plank_lengths = 150 / (length * cms);
cout << "number of lengths required " << plank_lengths << endl;
}
