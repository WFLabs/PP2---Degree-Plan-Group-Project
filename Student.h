#pragma once
#ifndef STUDENTH
#define STUDENTH
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <vector>
using namespace std;

class Student
{
public:
	virtual void SelectedMajor() const;
	void SetName(string fn, string ln);
	string GetName() const;
protected:
	string fname, lname;
	string fullname;
};

class Major : public Student {
public:
	virtual void SelectedMajor() const;
protected:
	//int reqHours;
	//string baseCourses, reqCourses;

};

class CIT : public Major
{
public:
	virtual void SelectedMajor() const;
};

class ART : public Major
{

};

class LANGART : public Major
{

};

class MATH : public Major
{

};

class ELECENG : public Major
{

};















#endif // !STUDENTH