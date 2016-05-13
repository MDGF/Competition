// NolanCodeWPAFB.cpp : Defines the entry point for the console application.
// Nolan Archer 5/10/2016
// Hackathon

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

	float focalLength;
	float realHeight;
	float imageHeight;
	float objectHeight;
	float sensorHeight;

	cout << "#############################################\n\tCalculating Distance to Object\n#############################################" << endl;

	cout << "\n\nPlease enter your focal length (mm)" << endl;
	cin >> focalLength;
	cout << "\nPlease enter the real height of the object (inches)" << endl;
	cin >> realHeight;
	cout << "\nPlease enter the image height (inches)" << endl;
	cin >> imageHeight;
	cout << "\nPlease enter the object's height (inches)" << endl;
	cin >> objectHeight;
	cout << "\nPlease enter the sensor Height (inches)" << endl;
	cin >> sensorHeight;

	int distanceToObject = (focalLength * realHeight * imageHeight) / (objectHeight * sensorHeight);

	cout << "\n\nYour total distance to the object is: " << distanceToObject << " inches. . ." << endl;

	cin.get();
	cin.ignore(10, '\n');

	return 0;
}

