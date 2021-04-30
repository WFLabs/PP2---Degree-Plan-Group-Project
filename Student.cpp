#include "Student.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*  Dwight:   I think this would be the basic framework for selecting majors.
Student should be the top-level-class, Major be a derived class below that, 
and each major (CIT, ART, ...) be derived classes below that, each w/ their 
available classes defined there? Or maybe each individual major have set/get 
functions to pull from a text file of available classes
*/
void Student::SelectedMajor() const
{
	cout << "You are not currently enrolled" << endl;
}

void Major::SelectedMajor() const
{
	cout << "You have yet to select a major" << endl;
}

void CIT::SelectedMajor() const
{
	cout << "You are enrolled in Computer Information Technologies" << endl;
}