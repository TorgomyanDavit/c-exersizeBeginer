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
    // int count;
    // std::cin >> count;

    // cout << "=== std::cin >> count === " << count << "\n";
}

void IF_AND_ELSE_LESSONS() {
    // int count,age;
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

    // std::cin >> count;
    // bool r = count > 10;

    // // std::cout << "what is => (count > 10) r "<< typeid(r).name()  <<  "\n";
    // std::cout << "what is "<< true <<  "\n";
    // std::cout << "type is "<< getType(r) << "\n";

    
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
    // int x;
    // std:cin >> x;

    // bool f = true;
    // bool d = false;
    // int a = 24;
    // bool c = -1;
    // int n = f + d + a + c;

    // std::cout << n << '\n';
    // std::cout << n << '\n';

}

void INCREASE_AND_DECREASE() {
    // int points = 10;
    // int x = ++i;
    // int x = points;
    // points = 50;

    // i = i + 2; =>  // i += 2; =>  // i += 1;
    // i %= 2;
    // i++; 
    // i--;
    // --i;



    // std::cout << x << "\n";
    // std::cout << points << "\n";

}

void LoopsForWhile() {
    // int x = 0;
    // while (x < 10) {
    //     std::cout << x << std::endl;
    //     x++;
    // }

    // for(int i = 0; i < 10; i++) {
    //     std::cout << i << std::endl;
    // }
    


    // std::cout << sum << std::endl;


    // for (int i = 0; i < 10; i++) {
    //     if(i % 2 != 0) {
    //         continue;
    //     }
    //     std::cout << i << std::endl;
    // }


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
    // int count;
    // std::cin >> count;

    // for (int i = count; i > 0; i--){
    //     std::cout << i << std::endl;
    // }

    // while (count > 0){
    //     std::cout << count << std::endl;
    //     count--;
    // }

    /** exersize 4*/
    // int count;
    // std::cin >> count;

    // // for (int i = 1; i <= count; i++){
    // //     std::cout << i << std::endl;
    // // }

    // int x = 1;
    // while (x <= count){
    //     std::cout << x << std::endl;
    //     x++;
    // }


    /** exersize 5*/
    // int count;
    // std::cin >> count;
    // int sum = 0;
    // for (int i = 1; i <= count; i++){
    //     sum += i;
    // }
    // std::cout << sum << std::endl;

    // int sum = 0;
    // while (count > 0){
    //     sum += count;
    //     count--;
    // }
    // std::cout << sum << std::endl;

    /** exersize 6*/
    // int count;
    // std::cin >> count;

    // for(int i = 0; i <= count;i++) {
    //     for(int x = 0;x < i; x++) {
    //         std::cout << 1;
    //     }
    //     std::cout << std::endl; 
    // }

    /** exersize 7*/

    // int count;
    // std::cin >> count;

    // int sum = 0;
    // for(int i = 0; i <= count;i++) {
    //     if(i % 2 != 0) {
    //         sum += i;
    //     }
    // }

    // std::cout << sum << std::endl; 

    /** exersize 8*/

    // int number, count;
    // std::cin >> number >> count;

    // int powResult = number;
    // for(int i = 0; i < count - 1; i++) { 
    //     powResult *= number;
    // }

    // std::cout << powResult << std::endl; 


    /** exersize 9 Half Diamonds*/ 

    







}

// Print Diamonds 1 to line 1
void printDiamondTo_1_to_1(int count) {
    for (int i = 1; i <= count; i++) {
        for (int emptyCount = 1; emptyCount <= count - i; emptyCount++) {
            std::cout << "_";
        }
        for (int dimondsCount = 1; dimondsCount <= 2 * i - 1; dimondsCount++) {
            std::cout << 1;
        }
        std::cout << std::endl;
    }
    
    for (int i = count - 1; i >= 1; i--) {
        for (int emptyCount = 1; emptyCount <= count - i; emptyCount++) {
            std::cout << "_";
        }
        for (int dimondsCount = 1; dimondsCount <= 2 * i - 1; dimondsCount++) {
            std::cout << 1;
        }
        std::cout << std::endl;
    }

}

// Print Diamonds 1 to line 2
void printDiamondTo_1_to_2(int count) {
    int ones = 1;
    int underLineCount = count;


    for (int i = 1; i <= count; i++) { 
        for (int y = underLineCount; y > 1; y--) { 
            std::cout << "_";
        }

        for (int x = 1; x <= 2 * ones - 1; x++) { 
            std::cout << 1;
        }

        std::cout << std::endl; 
        if(i > count / 2) {
            ones -= 2;
        } else {
            ones += 2;
        }

        if(i > underLineCount) {
            underLineCount += 2;
        } else {
            underLineCount -= 2;
        }

    }
}

// Print Half Diamonds
void printHalfDiamond(int count) {
    int ones = 1;
    for (int i = 1; i <= count; i++) { 
        for (int x = 1; x <= ones; x++) { 
            std::cout << 1;
        }

        std::cout << std::endl; 
        if(i > count / 2) {
            ones -= 2;
        } else {
            ones += 2;
        }
    }
}

void RepeatLessons() {
    cout << "=== Start Lessons 2 ===" << endl;
    // STD_CIN_LESSONS();
    // IF_AND_ELSE_LESSONS();
    // FOR_LOOP();
    // BOOLEAN_OPERATORS();
    // INCREASE_AND_DECREASE();
    // LoopsForWhile();
    LOOP_EXERCIZE();
    // printHalfDiamond(5);
    // printDiamondTo_1_to_1(5)
    // printDiamondTo_1_to_2(5)


}