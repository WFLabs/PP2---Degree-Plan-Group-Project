// PP2 - Degree Plan Group Project
// Dwight Renner, Abel Desta, Addi Silva Rendon, Hunter Goins

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <fstream>
#include <vector>
#include "Student.h"

struct Schedule {
	string DayOfWeek;
	int time24h, credithours;
};

//  type MajorList();
//  type ClassesPerMajor();
//  type StudentSchedule();
  void PassingStudent(Student *s);

int main() {
	vector<Student> vStudentCourses;

	Student* s1 = new Student();

	s1->SelectedMajor();

	s1 = new Major();

	s1->SelectedMajor();

	s1 = new CIT();

	s1->SelectedMajor();
	
	PassingStudent(s1);

	cout << "We're now back in main()" << endl;
	s1->SelectedMajor();

	cout << "Now we're pulling from a vector" << endl;
	vStudentCourses.push_back(*s1);						// Here's where I'm stuck. 
	vStudentCourses.at(0).SelectedMajor();				// For whatever reason, it's creating a new obj.

	for (auto stud : vStudentCourses) {					// Same issue in a ranged loop.	
		stud.SelectedMajor();							
	}

	return 0;
}

void PassingStudent(Student *s) {					// This demo function passes the object by reference
	cout << "We've passed to a function" << endl;	
	s->SelectedMajor();								
	return;
}