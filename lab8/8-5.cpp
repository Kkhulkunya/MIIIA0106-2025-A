// 8-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// TODO 1) เติม field ที่ขาดใน Address และ Phone ให้ครบ
// TODO 2) เติม field ใน Student: id, name, surname, addr, tel
// TODO 3) รับค่าข้อมูลนักศึกษา 1 คน (รวมที่อยู่ + โทรศัพท์)
// TODO 4) แสดงผลข้อมูลทั้งหมด

#include <iostream>
using namespace std;
struct Address {
	string number;
	char road[20];
	char district[20];
	char province[20];
	// TODO: (ถ้าต้องการเพิ่ม) เช่น postcode[6]
};
struct Phone {
	char home[10];
	char mobile[10];
};
struct Student {
	char id[9];
	char name[20];
	char surname[20];
	Address addr;
	Phone tel;
	// TODO:
};
int main() {
	Student s1;
	// TODO 3) รับค่าข้อมูลนักศึกษา 1 คน (รวมที่อยู่ + โทรศัพท์)
	cout << "Enter Student Information:\n";
	cout << "ID: "; cin >> s1.id;
	cout << "Name: "; cin >> s1.name;
	cout << "Surname: "; cin >> s1.surname;

	cout << "Address - House Number: ";
	cin >> s1.addr.number;

	cout << "Address - Road: ";
	cin >> s1.addr.road;

	cout << "Address - District: ";
	cin >> s1.addr.district;

	cout << "Address - Province: ";
	cin >> s1.addr.province;

	cout << "Phone - Home: ";
	cin >> s1.tel.home;

	cout << "Phone - Mobile: ";
	cin >> s1.tel.mobile;
	cout << "\n===== Output =====\n";
	//// TODO 4): แสดงผลข้อมูลทั้งหมด (รวม address และ phone)
	cout << "ID" << s1.id << "\n";	
	cout << "Name: " << s1.name << "\n";
	cout << "Surname: " << s1.surname << "\n";
	cout << "number: " << s1.addr.number << "\n";
	cout << "road: " << s1.addr.road << "\n";
	cout << "district: " << s1.addr.district << "\n";
	cout << "province: " << s1.addr.province << "\n";

	cout << "home: " << s1.tel.home << "\n";
	cout << "mobile: " << s1.tel.mobile << "\n";
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
