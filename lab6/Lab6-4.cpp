// Lab6-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;



void calculateGrade(double score, char& grade) 
{
    if (score >= 80) grade = 'A';
    else if (score >= 70) grade = 'B';
    else if (score >= 60) grade = 'C';
    else if (score >= 50) grade = 'D';
    else grade = 'F';
}

void displayStudentInfo(string name, string id, double score, char grade) 
{
    cout << endl;
    cout << "Student Name: " << name << endl;
    cout << "Student ID : " << id << endl;
    cout << "Score : " << fixed << setprecision(2) << score << endl;
    cout << "Grade : " << grade << endl;
}

int main()
{
    int size;
    cout << "Enter number of students: ";
    cin >> size;
    cin.ignore(); 

    string* name = new string[size];
    string* id = new string[size];
    double* score = new double[size];
    char* grade = new char[size];

    for (int i = 0; i < size; i++) 
    {
        cout << "Enter student " << (i + 1) << " name: ";
        getline(cin, name[i]);

        cout << "Enter student " << (i + 1) << " id: ";
        getline(cin, id[i]);

        cout << "Enter student " << (i + 1) << " score: ";
        cin >> score[i];

        cin.ignore();

        calculateGrade(score[i], grade[i]);
    }

    for (int i = 0; i < size; i++) 
    {
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
    }
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
