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
  void PassingStudentVec(vector<Student*>& list);

int main() {
	vector<Student *> vStudentCourses;

	Student* s1 = new Student();

	s1->SelectedMajor();

	s1 = new Major();

	s1->SelectedMajor();

	s1 = new CIT();

	s1->SelectedMajor();
	
	PassingStudent(s1);

	cout << "The address of our object is " << &s1 << endl;

	cout << "Now we're pulling from a vector" << endl;
	vStudentCourses.push_back(s1);

	vStudentCourses.at(0)->SelectedMajor();

	cout << "The size of our vector is " << vStudentCourses.size() << endl;
	cout << "The address of the object in the vector is  " << &vStudentCourses.at(0) << endl;

	for (auto stud : vStudentCourses) {					// Same issue in a ranged loop.	
		stud->SelectedMajor();							
	}

	PassingStudentVec(vStudentCourses);

	return 0;
}

void PassingStudent(Student *s) {					// This demo function passes the object by reference
	cout << "We've passed our object to a function" << endl;	
	s->SelectedMajor();								
	return;
}

void PassingStudentVec(vector<Student*>& list) {					// This demo function passes the object by reference
	cout << "We've passed our vector to a function" << endl;
	for (auto stud : list) {					// Same issue in a ranged loop.	
		stud->SelectedMajor();
	}
	return;
}