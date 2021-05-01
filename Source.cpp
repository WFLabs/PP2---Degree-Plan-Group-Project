// PP2 - Degree Plan Group Project
// Dwight Renner, Abel Desta, Addi Silva Rendon, Hunter Goins

//Preprocessor Directives moved to header file

#include "Student.h"
using namespace std;

struct Schedule {						// i have no idea if this'll be useful
	string DayOfWeek;					// or if it should be in the classes?
	int time24h, credithours;			// thoughts?
};

//  type MajorList();
//  type ClassesPerMajor();
//  type StudentSchedule();
  void PassingStudent(Student *s);					// be sure to pass objects as pointers
  void PassingStudentVec(vector<Student*>& list);	// be sure to pass vectors of pointer types by reference

int main() {
	vector<Student *> vStudentCourses;

	Student* s1 = new Student();					// our student is still going through admissions
	
	s1->SetName("John", "Doe");						// We can give student a name
	cout << s1->GetName() << endl;					// and print it

	s1->SelectedMajor();		

	s1 = new Major();								// our student is enrolled but hasn't selected their major

	s1->SelectedMajor();		

	s1 = new CIT();									// our student has selected CIT

	s1->SelectedMajor();
	
	PassingStudent(s1);								// here's a footprint for passing an object to a function

	cout << "Now we're pulling from a vector" << endl;
	vStudentCourses.push_back(s1);					// here's how to add new objects to our vector
	vStudentCourses.at(0)->SelectedMajor();			// here's a footprint for how we call the functions from our vector

	PassingStudentVec(vStudentCourses);				// here's a footprint for passing a vector to a function

	for (auto stud : vStudentCourses) {				// here's a footprint for going thru our vector in a 
		stud->SelectedMajor();						// ranged loop that will protect us from bad memory reads.
	}

	return 0;
}

void PassingStudent(Student *s) {			// This demo function passes the object by reference
	cout << "We've passed our object to a function" << endl;	
	s->SelectedMajor();
	return;
}

void PassingStudentVec(vector<Student*>& list) {	// This demo function passes the vector by reference
	cout << "We've passed our vector to a function" << endl;
	for (auto stud : list) {	
		stud->SelectedMajor();
	}
	return;
}