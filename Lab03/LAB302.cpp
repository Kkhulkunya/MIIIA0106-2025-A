// LAB302.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdio.h>


using namespace std;
int main()
{
	string name;
	int age;
	string stuID;
	int score;
	string grade;

	cout << "Enter name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
	cout << "Enter student ID: ";
	cin >> stuID;
	cout << "Enter score: ";
	cin >> score;

	if (score >= 90)
	{
		grade = "A";
	}
	else if (score >= 80)
	{
		grade = "B";
	}
	else if (score >= 70)
	{
		grade = "C";
	}
	else if (score >= 60)
	{
		grade = "D";
	}
	else 
	{
		grade = "F";
	}

	cout << "Student Report:" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Student ID: " << stuID << endl;
	cout << "Score: " << score << endl;
	cout << "Grade: " << grade << endl;
	cout << "---------------------" << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
