/* 
File name: main.cpp
description: This project will prompt the user for the radius and then prdouble:
		The area and circumference of a circle with that radius
		The volume and surface area of a sphere with that radius

Author: Johnny Bertoldo
Email: johnnyb5092@student.vvc.edu 
*/
#include<iostream>

using namespace std;

int main ()
{
	// Declare the radius, area, volume, s area, circum
     
double radius;
double area;
double volume; 
double sarea;
double circum;
double pi = 3.14159265;
	
    // Prompt the user for the radius
cout<< "\tEnter radius? " ;

cin >> radius; 

    // calc circumference ot the circle with a given radius
circum = 2.0 * pi * radius;

    // calc area of the circle with a given radius 
area =  pi * radius * radius;
 
    // calc surface area of the sphere with given radius 
sarea = 4.0 * pi *  radius * radius ;

    // calc volume of the sphere with the given radius 
volume = (4.0/3.0) * radius * radius * radius * pi; 

    // prdouble the circumference  "print"
cout << "\tCircumference " << circum << endl;

	// prdouble the sarea "print"
cout << "\tsarea " << sarea<< endl;

	// prdouble the volume "print"
cout <<"\tvolume " << volume<< endl;

	// prdouble the surface area "print"
cout << "\tarea " << area<< endl;

return 0;
}
