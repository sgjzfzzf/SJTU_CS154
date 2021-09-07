#ifndef _student
	#define _student
	#include<iostream>
	using namespace std;
	struct Student
	{
		char name[10];
		long int code;
		int math;
		int English;
		int physics;
		int grade;
		double average;
		Student* next;
	};
	void addInformation();
	void reviseInformation();
	void printInformation();
	void code_searchInformation();
	void name_searchInformation();
	void code_sort();
	void grade_sort();
#endif