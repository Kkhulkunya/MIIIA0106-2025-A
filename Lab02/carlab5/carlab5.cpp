// carlab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int leftSensor = 2;
    int rightSensor = 3;

    int motorL1 = 4;
    int motorL2 = 5;
    int motorR1 = 6;
    int motorR2 = 7;

    void setup() 
    {
        pinMode(leftSensor, INPUT);
        pinMode(rightSensor, INPUT);

        pinMode(motorL1, OUTPUT);
        pinMode(motorL2, OUTPUT);
        pinMode(motorR1, OUTPUT);
        pinMode(motorR2, OUTPUT);
    }


    void loop() 
    {
        int L = digitalRead(leftSensor);
        int R = digitalRead(rightSensor);

        if (L == 0 && R == 0) {      // ???????
            forward();
        }
        else if (L == 0 && R == 1) { // ??????????
            turnLeft();
        }
        else if (L == 1 && R == 0) { // ?????????
            turnRight();
        }
        else {                      // ????
            stopCar();
        }
    }

    void forward() {
        digitalWrite(motorL1, HIGH);
        digitalWrite(motorL2, LOW);
        digitalWrite(motorR1, HIGH);
        digitalWrite(motorR2, LOW);
    }

    void turnLeft() {
        digitalWrite(motorL1, LOW);
        digitalWrite(motorL2, LOW);
        digitalWrite(motorR1, HIGH);
        digitalWrite(motorR2, LOW);
    }

    void turnRight() {
        digitalWrite(motorL1, HIGH);
        digitalWrite(motorL2, LOW);
        digitalWrite(motorR1, LOW);
        digitalWrite(motorR2, LOW);
    }

    void stopCar() {
        digitalWrite(motorL1, LOW);
        digitalWrite(motorL2, LOW);
        digitalWrite(motorR1, LOW);
        digitalWrite(motorR2, LOW);
    }
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
