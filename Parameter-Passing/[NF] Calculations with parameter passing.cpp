//Peter Kemley

#include "stdafx.h"
#include <iostream>

using namespace std;

//methods
void input();
void calculate_triangle();
void calculate_circle();
void calculate_square();
void output(double trianglearea, double circlearea, double circlecirc, double squarearea);

//global variables
double length, breadth; //triangle
double radius; //circle
double side; //square
double trianglearea, circlearea, circlecirc, squarearea;

int _tmain(int argc, _TCHAR* argv[])
{
	system("cls");
	input();
	calculate_triangle();
	calculate_circle();
	calculate_square();
	return 0;
}

void input()
	{
		cout << "Enter the length of the triangle : ";
		cin >> length;
		cout << "Enter the breadth of the triangle : ";
		cin >> breadth;
		cout << "Enter the Radius of the Circle : ";
		cin >> radius;
		cout << "Enter One Side of the Square : ";
		cin >> side;
	}

void calculate_triangle()
	{
		trianglearea = 0.5 * (length*breadth);
	}

void calculate_circle()
{	//o	calculate the area (πr2 – use 3.14 to represent π)
    //o	calculate the circumference of the circle (2πr)
	
	double pie = 3.14;
	
	circlearea = pie * (radius*radius);
	circlecirc = 2*pie*radius;
}

void calculate_square()
{
	double squarearea;
	squarearea = side*side;
	output(trianglearea, circlearea, circlecirc, squarearea);
}	

void output(double trianglearea, double circlearea, double circlecirc, double squarearea)
{
	cout << "Your Triangle's Area was : " << trianglearea << endl;
	cout << "Your Circle's Area was : " << circlearea << endl;
	cout << "Your Circle's Circumference was : " << circlecirc << endl;
	cout << "Your Square's Area was : " << squarearea << endl;
}

