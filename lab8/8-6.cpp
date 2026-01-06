// 8-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// TODO 1) เติม field ใน struct Student ให้ครบ: studentID, nickname
// TODO 2) ใช้ pointer p ชี้ไปที่ s1
// TODO 3) ก าหนดค่าโดยใช้ p->
// TODO 4) แสดงผลโดยใช้ p->
#include <iostream>
#include <string>
using namespace std;
struct Student {
	string studentID;
	string nickname;
};
int main() {
	Student s1;
	Student* p = nullptr;
	// TODO 2) ใช้ pointer p ชี้ไปที่ s1
	// TODO: p = &s1;
	p= &s1;
	// TODO 3) ก าหนดค่าโดยใช้ p->
	// TODO: p->studentID = ...
	// TODO: p->nickname = ...
	p->studentID = "6811130032";
	p->nickname = "Pond";
	// TODO 4) แสดงผลโดยใช้ p->
	cout << "ID: " << p->studentID << endl;
	cout << "Nickname: " << p->nickname << endl;
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
