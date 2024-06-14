#include <iostream>
#include <type_traits>
#include <string>
using namespace std;

template <typename T>
std::string getType(const T&) {
    if (std::is_same<T, int>::value) return "int";
    if (std::is_same<T, double>::value) return "double";
    if (std::is_same<T, float>::value) return "float";
    if (std::is_same<T, bool>::value) return "bool";
    if (std::is_same<T, char>::value) return "char";
    if (std::is_same<T, std::string>::value) return "std::string";
    return "unknown";
}

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

    // std::cout << "what is => (count > 10) r "<< typeid(r).name()  <<  "\n";
    std::cout << "what is "<< true <<  "\n";
    std::cout << "type is "<< getType(r) << "\n";

    
}

void FOR_LOOP() {
    // int x;
    // int sum = 0;
    // do {
    //     std::cin >> x;
    //     sum += x;
    // } while (x != 0);

    // std::cout << sum << std::endl;


    // for (int i = 0; i < 10; i++) {
    //     if(i % 2 != 0) {
    //         continue;
    //     }
    //     std::cout << i << std::endl;
    // }


    for (int i = 0; i < 10; i++) {
        std::cout << i << std::endl;
    }
}

void LOOP_EXERCIZE() {

    /** exersize 1*/
    // for (int i = 1; i <= 10; i++) {
    //     std::cout << i << std::endl;
    // }

    /** exersize 2*/
    // int i = 1;
    // while (i <= 10) {
    //     std::cout << i << std::endl;
    //     i++;
    // }

    /** exersize 3*/
    int count;
    std::cin >> count;

    // for (int i = count; i > 0; i--){
    //     std::cout << i << std::endl;
    // }

    while (count > 0){
        std::cout << count << std::endl;
        count--;
    }
    
    

    
}


void RepeatLessons() {
    cout << "=== Start Lessons 2 ===" << endl;
    // STD_CIN_LESSONS();
    // IF_AND_ELSE_LESSONS();
    // FOR_LOOP();
    LOOP_EXERCIZE();

}