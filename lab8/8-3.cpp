// 8-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
// TODO 2) เขียนฟังก์ชัน printStudent(Student s) ให้แสดงผลครบทุก field
// TODO 3) ใน main รับข้อมูล 1 คน แล้วเรียก printStudent(s1)

#include <iostream>
#include <string>
using namespace std;
struct Student 
{
	string id;
	string nickname;
	string lineId;
	string phone;
};
// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s1) 
{
	cout << "\n=== Output student===\n";
	cout << "ID \t\tNickname \tLineId \tPhone\n";
	cout << s1.id << "\t" << s1.nickname << "\t" << s1.lineId << "\t" << s1.phone << "\n";
}
int main() 
{
	Student s1;
	cout << "Enter of Id: ";
	cin >> s1.id;

	cout << "Enter of Nickname: ";
	cin >> s1.nickname;

	cout << "Enter of LineId: ";
	cin >> s1.lineId;

	cout << "Enter of Phone: ";
	cin >> s1.phone;

	cout << "\n=== Output (from funtion) ===\n";
	printStudent (s1);

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
