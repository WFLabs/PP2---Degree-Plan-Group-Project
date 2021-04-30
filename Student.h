#pragma once
#ifndef STUDENTH
#define STUDENTH
using namespace std;

class Student
{
protected:
	//string fname, lname;


public:
	virtual void SelectedMajor() const;
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