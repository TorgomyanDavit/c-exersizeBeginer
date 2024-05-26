#include <iostream>
using namespace std;

void STD_CIN_LESSONS() {
    int count;
    std::cin >> count;

    cout << "=== std::cin >> count === " << count << "\n";
}


void IF_AND_ELSE_LESSONS() {
    int count,age;
    // std::cin >> count >> age;

    // if(count == 10) {
    //     cout << "count is equal => " << count << "\n";
    // } else if(count > 10) {
    //     if(count == age) {
    //         std::cout << "count is equal => " << " => age "  << age << "\n";
    //     }
    //     cout << "count is more than " << count << "\n";
    // } else {
    //     cout << "count is less than " << count << "\n";
    // }

    // if(count != age) {
    //     std::cout << "count is not equal => " << " => age "  << age << "\n";
    // }
    
    // if(age <= 10) {
    //     std::cout << "age is less or equal => " << "10" << "\n";
    // }

    std::cin >> count;
    bool r = count > 10;

    std::cout << "what is => (count > 10) r "<< typeid(r).name()  <<  "\n";
    std::cout << "what is "<< true <<  "\n";
    std::cout << "what is "<< false <<  "\n";


}


void RepeatLessons() {
    cout << "=== Start Lessons 2 ===" << endl;
    // STD_CIN_LESSONS();
    IF_AND_ELSE_LESSONS();
}