// Lab6-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

void calculateGrade(double total, char& grade) 
{
    if (total >= 80) grade = 'A';
    else if (total >= 70) grade = 'B';
    else if (total >= 60) grade = 'C';
    else if (total >= 50) grade = 'D';
    else grade = 'F';
}

void displayStudentInfo(string name, string id, double total, char grade) {
    cout << "Student Name: " << name << endl;
    cout << "Student ID : " << id << endl;
    cout << "Score      : " << fixed << setprecision(2) << total << endl;
    cout << "Grade      : " << grade << endl;
}

int main() {
    const int N = 3;
    const int M = 4;

    string name[N], id[N];
    double score[N][M];
    double total[N];
    char grade[N];

    for (int i = 0; i < N; i++) {
        cout << "Enter student " << (i + 1) << " name: ";
        getline(cin >> ws, name[i]);

        cout << "Enter student " << (i + 1) << " id: ";
        cin >> id[i];

        total[i] = 0;

        for (int j = 0; j < M; j++) {
            cout << "Enter student " << (i + 1) << " score" << (j + 1) << ": ";
            cin >> score[i][j];

            total[i] += score[i][j];
        }

        calculateGrade(total[i], grade[i]);
    }

    cout << "--------------------------------" << endl;

    for (int i = 0; i < N; i++)

    {
        displayStudentInfo(name[i], id[i], total[i], grade[i]);
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
