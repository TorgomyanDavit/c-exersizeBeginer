#include <iostream>
using namespace std;



void STD_CIN_EXAMPLE() {

    int count;
    std::cin >> count;


    cout << "=== std::cin >> count === " << count << "\n";
}


void IF_AND_ELSE_EXAMPLE() {
    int count;
    std::cin >> count;

    if(count == 10) {
        cout << "count is equal => " << count << "\n";
    } else if(count > 10) {
        cout << "count is more than " << count << "\n";
    } else {
        cout << "count is less than " << count << "\n";
    }


}


void RepeatLessons() {
    cout << "=== Start Lessons 2 ===" << endl;
    // STD_CIN_EXAMPLE();
    IF_AND_ELSE_EXAMPLE();
}