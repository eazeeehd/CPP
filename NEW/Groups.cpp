#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void get_name();
void group_pref(string student);
void groupA_total(string student);
void groupB_total(string student);

int _tmain(int argc, _TCHAR* argv[])
{
	get_name();
	return 0;
}

void get_name()
{
  /*local variable to store name
  */
  string student = " ";
  cout << "Enter Students Name: ";
  getline(cin, student);
  group_pref(student);
}

void group_pref(string name)
{
  //print group and include the student name
  //declare and initialise a local variable
  //read in group
  //if student group is a 
  //call group a and pass student name
  
	char group_choice =' ';
	cout << "Which Group For " << name << " : ";
  cin >> group_choice;
  
  if(group_choice == 'A' || group_choice == 'a')
	  groupA_total(name);
  else if(group_choice == 'B' || group_choice == 'b')
	  groupB_total(name);
  else
	  cout << "INVALID ENTRY";

}

void groupA_total(string name)
{
	/* Local variuable to be incremented
	print student name added to group a
	increment++
	print total*/
	int total = 11;
	total++;
	cout << name << "Added to group A index" << endl;
	cout << "total student in group a is " << total << endl;
}

void groupB_total(string name)
{
	/* Local variuable to be incremented
	print student name added to group a
	increment++
	print total*/
	int total = 9;
	total++;
	cout << name << "Added to group A index" << endl;
	cout << "Total Amount of Students in group A is:  " << total << endl;
}
