#include <iostream>
using namespace std;


void RepeatLessons() {
    cout << "=== Start Lessons ===" << endl;

    int age = 7;


    {
        {
            int age = 5;
        }
    }

    std::cout << age << "\n";
}