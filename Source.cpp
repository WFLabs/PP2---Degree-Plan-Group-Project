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

int main() {
	vector<Student> vStudentCourses;

	Student* s1 = new Student();

	s1->SelectedMajor();

	s1 = new Major();

	s1->SelectedMajor();

	s1 = new CIT();

	s1->SelectedMajor();


	return 0;
}