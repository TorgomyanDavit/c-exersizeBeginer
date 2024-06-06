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

    std::cout << "what is => (count > 10) r "<< typeid(r).name()  <<  "\n";
    std::cout << "what is "<< true <<  "\n";
    std::cout << "type is "<< getType(r) << "\n";

    
}

void BOOLEAN_OPERATORS() {
    // exersize 1 

    // int x;
    // std:cin >> x;
    // if(x > 10) { // &&, ||, !
    //     std::cout << x << '\n';
    // } else {
    //     std::cout << 0 << '\n';
    // }

    // exersize 2

    // int x,y,z;
    // std:cin >> x >> y >> z;

    // if(z == 1) {
    //     std::cout << x + y << std::endl;
    // } else if(z == 2) {
    //     std::cout << x - y << std::endl;
    // } else if(z == 3) {
    //     std::cout << x * y << std::endl;
    // } else if(z == 4) {
    //     std::cout << x / y << std::endl;
    // } else if(z == 5) {
    //     std::cout << x % y << std::endl;
    // } else{
    //     std::cout << -1 << std::endl;
    // }

    // exersize 3

    // int x;
    // std:cin >> x;
    // if(((x > 0) && (x <= 10) )) { 
    //     std::cout << 5 << '\n';
    // } else {
    //     std::cout << 0 << '\n';
    // }

    // exersize 4

    // int x = 15;
    // std:cin >> x;
    // if(!((x > 0) && (x <= 10 || (x >= 50 && x != 60)))) { 
    //     std::cout << 5 << '\n';
    // } else {
    //     std::cout << 10 << '\n';
    // }

    // exersize 5
    // int x;
    // std:cin >> x;

    // bool z = x > 23 && (x > 100 && !( x == 120));
    // bool d = ((x % 2) == 0);
    // int y = z + d;
    // std::cout << y << '\n';

    // if(y > 1) { 
    //     std::cout << 5 << '\n';
    // } else {
    //     std::cout << 10 << '\n';
    // }

    // exersize 6
    int x;
    std:cin >> x;

    bool f = true;
    bool d = false;
    int a = 24;
    bool c = -1;
    int n = f + d + a + c;

    std::cout << n << '\n';
    std::cout << n << '\n';

}



void RepeatLessons() {
    cout << "=== Start Lessons 2 ===" << endl;
    // STD_CIN_LESSONS();
    // IF_AND_ELSE_LESSONS();
    BOOLEAN_OPERATORS();
}