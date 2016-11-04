/* A program which allows the user to enter a
* student mark
* calculates number of students
* grades each of the mark bandings
* calculates average mark
********************************************************/

#include "stdafx.h"
#include <iostream>

using namespace std;

const int terminator = -1;
double student_mark, total, average;
int number_of_students;
char grade;
int gradeA, gradeB, gradeC, gradeD, fail;

void initialise();
void get_marks();
void calculate_average();
void grading();
void print_results();

void main()
{
initialise();
while(student_mark != terminator)
	{
		get_marks();
	}
calculate_average();
print_results();
}

void initialise()
{
number_of_students = 0;
total = 0.0;
average = 0.0;
gradeA = 0, gradeB = 0, gradeC = 0, gradeD = 0, fail = 0;
}

void get_marks()
{
	//prompt user to enter grade 0-100
	cout << "Enter mark between 0-100 : " << endl;
	cin >> student_mark;
	if((student_mark >= 0) && (student_mark <= 100))
	{
	if(student_mark >= 70)
	gradeA++;
	if ((student_mark >=60) && (student_mark <=50))
	gradeB++;
	if((student_mark >=50) && (student_mark <=40))
	gradeC++;
	if(student_mark >=40)
	gradeD++;
	if(student_mark <40)
	fail++;
	}
	else
		cout << "Invalid Mark !!! " << endl;
}

void calculate_average()
{
average = total / number_of_students;
}

void print_results()
{
cout << "The number of student grades is " << number_of_students << endl;
cout << "The average mark is " << average << endl;
cout << "There were " << gradeA << " grade A students" << endl;
cout << "There were " << gradeB << " grade B students" << endl;
cout << "There were " << gradeC << " grade C students" << endl;
cout << "There were " << gradeD << " grade D students" << endl;
cout << "There were " << fail << " students that failed" << endl;
}

