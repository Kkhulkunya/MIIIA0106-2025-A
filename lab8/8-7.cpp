// 8-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;

struct Phone 
{
    string mobile;
    string home;
};

struct Parent 
{
    string name;
    string relationship;
    Phone contact; 
};

struct Student 
{
    string id;
    string nickname;
    string lineId;
    Phone myContact;   
    Parent myParent;   
};

int main() 
{
    Student s1;

    s1.id = "6811130032";
    s1.nickname = "Pond";
    s1.lineId = "papapig";

    s1.myContact.mobile = "0939329833";
    s1.myContact.home = "021234567";

    s1.myParent.name = "Khulkunya";
    s1.myParent.relationship = "Father";

    s1.myParent.contact.mobile = "0899876543";
    s1.myParent.contact.home = "021238567";

    cout << "--- Student Info ---" << endl;
    cout << "ID: " << s1.id << endl;
    cout << "Nickname: " << s1.nickname << endl;
    cout << "Line ID: " << s1.lineId << endl;
    cout << "Mobile: " << s1.myContact.mobile << endl;
    cout << "Home: " << s1.myContact.home << endl;

    cout << "\n--- Parent Info ---" << endl;
    cout << "Name: " << s1.myParent.name << " (" << s1.myParent.relationship << ")" << endl;
    cout << "Parent Mobile: " << s1.myParent.contact.mobile << endl;
    cout << "Parent Home: " << s1.myParent.contact.home << endl;

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
