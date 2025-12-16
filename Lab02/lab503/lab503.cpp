




// lab503.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void processNumber(int number, int& minValue, int& count) {
    if (count == 0) {
        minValue = number;   // ค่าน้อยสุดเริ่ม
    }
    else if (number < minValue) {
        minValue = number;
    }
    count++;
}

int main() {
    int number;
    int minValue;
    int count = 0;

    while (true) {
        cout << "Enter number: ";
        cin >> number;

        if (number == 0) {
            break;  // หยุดตอนใส่ 0
        }

        processNumber(number, minValue, count);
    }

    cout << endl;
    cout << "Total numbers entered: " << count << endl;
    if (count > 0) {
        cout << "Minimum value: " << minValue << endl;
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
