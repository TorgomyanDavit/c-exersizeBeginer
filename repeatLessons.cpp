#include <iostream>
#include <type_traits>
#include <string>
#include <cstdint>
#include <vector>
#include <algorithm>
using namespace std;
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))


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
    /** exersize 10 Half Diamonds*/ 
    /** exersize 11 print IsPrime*/ 



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

void printIsPrimeNumber(int count) {

    for(int i = 2;i < count;i++) {
        bool isPrime = true;
        for(int x = 2; x < i;x++) {
            if(i % x == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            std::cout << i << std::endl;
        }
    }
}

void SWITCH_CASE() {
    int x;
    std:cin >> x;

    // if(x == 1) {
    //     std::cout << 111 << std::endl;
    // } else if(x == 2) {
    //     std::cout << 222 << std::endl;
    // } else if(x == 3) {
    //     std::cout << 333 << std::endl;
    // }  else {
    //     std::cout << "else" << std::endl;
    // } 

    switch(x) {
        case 1:
            std::cout << 111 << std::endl;
            break;
        case 2:
            std::cout << 222 << std::endl;
            // break;
        case 3:
            std::cout << 333 << std::endl;
            break;
        default:
            std::cout << "else" << std::endl;
            break;
    }

}


int FUNCTION() {
    auto printResult = [](int count) {
        int result = 0;
        for(int i = 1; i <= count; i++) {
            result += i;
        }
        std::cout << result << std::endl;
    };

    auto sum = [&](int count) { // using [&] with lambda function to allow use anoher printResult() reference from another func
        printResult(count);
        return 1;
    };


    return sum(10);
}

int PrimitiveDataType() {
    int a = 2147483648; /** -2147483647;  4 byte */ 
    unsigned int b = 4294967295;
    short int c = 32767;  /** -32767 2 byte*/ 
    unsigned short int d = 65535;  /** -32767 2 byte */ 
    long int e = 2147483647;  /** -2147483648 4 byte */ 
    long long int f = 9223372036854775807;  /** -9223372036854775808 to 9223372036854775807 */ 
    unsigned long long int g = 9223372036854775807;  /** -9223372036854775808 to 9223372036854775807 */ 
    unsigned char i2 = 55;
    char i = 'a'; /** 97 */ 
    char z = i + 10;
    double db = 12.5;
    float fl = 12.5f;
    bool bl = true;



    std::cout << "byte => " << sizeof(db) << std::endl;
    std::cout << "byte => " << sizeof(fl) << std::endl;

    return 0;   
}


void swap(int *a,int *b) {
    int *z = a;
    a = b;
    b = z;

    std::cout << "dsdsdad => "  << std::endl;
}

int Pointer() {
    int i = 25;
    int *iPtr = &i;
    *iPtr = 10;
    int **iPtr2 = &iPtr; 

    int x = 55; // 0x001
    int y = 60; // 0x002

    swap(x,y);

    int v = 55;
    int *vPtr = &v;
    *vPtr = 66;

    std::cout << "PTR => " << *vPtr << std::endl;
    std::cout << "byte => " << y << std::endl;

    return 0;   
}


/**
 * c    =>     0x61fed8    =>  8
 * b    =>     0x61fed4    =>  0x61fed8
 * a    =>     0x654635    =>  0x61fed4
 * x    =>     0xfsdffs    =>  8
 * py   =>     0xdasd56    =>  0x61fed8
 * ppz  =>     0x4dasd4    =>  0x61fed4   
 * y    =>     0x65464q    =>  8
 * z    =>     0xdad46d    =>  6
*/
int F(int x, int *py,int **ppz) {
    int y;
    **ppz += 1;
    int z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

int PointerExersize() {
    /** 9 */
    int c = 5; 
    int *b = &c; 
    int **a = &b;

    // std::cout << F(c,b,a) << std::endl;

    /* 1 */
    // int a = 20;
    // int *b = &a;
    // std::cout << "PTR => " << b << std::endl;

    /* 2 */
    // double a = 20.5;
    // double *b = &a;
    // std::cout << "exersize => " << *b + 10 << std::endl;

    /* 3*/
    // double a = 10;
    // std::cout << "exersize => " << *(&(*(&a))) << std::endl;

    /** 4 */
    // int a = 5; 
    // int b = 10;
    // int *c = &a;
    // int d = *c + b + (*(&a));
    // *c = d * 2;

    /** 5 */
    // double a = 4.2;
    // double b = 2;
    // double *c = &b;
    // *c = (2) * (4.2) * 2;

    // std::cout << "exersize => " << a << std::endl;  /* 4.2*/
    // std::cout << "exersize => " << b << std::endl; /*16.8*/

    /** 6 */
    // double d = 4.3;
    // double q = 1.5;
    // double * ptr = &d;
    // (*ptr)++; /**5.3*/
    // *ptr = q;

    // std::cout << "exersize => " << *ptr << std::endl;  /** 1.5*/
    // std::cout << "exersize => " << d << std::endl; /*1.5*/
    // std::cout << "exersize => " << q << std::endl; /*1.5*/

    /** 7 */
    // int a =7;
    // int b = 13;
    // int *c = &b;
    // *c = 2;

    // std::cout << "exersize => " << a << std::endl;    
    // std::cout << "exersize => " << b << std::endl;    

    /** 8 */
    // int a = 500;
    // int b = 10;
    // int *d = &a;
    // int *z = &b;
    // d = z;
    // *d += 20;

    // std::cout << "exersize => " << a << std::endl;  /*500*/  
    // std::cout << "exersize => " << b << std::endl;  /** 30*/

    return 0;   
}


double Average(int z[], int length) {
    std::cout << z << std::endl;
    int result = 0;

    // z = {15, 25, 35, 45, 55}
    for (int i = 0; i < length; i++) {
        result += *(z + i); //  z[i]
    };

    std::cout << "Sum of elements: " << result << std::endl;
    
    // Convert result to double for precise division
    double average = static_cast<double>(result) / length;
    std::cout << "Average: " << average << std::endl;

    return average;
}

void Array() {

    int x[] = {55, 25, 93, 100, 12};
    int length  = sizeof(x) / sizeof(int);

    int *xPtr = x;
    // Average(x,length);
    // std::cout << Average(x,length) << std::endl;
    // std::cout << x[4] << std::endl;


    // std::vector<int> arr = {1, 2, 3, 4, 5};
    // int length = arr.size(); 
    // std::cout << "Array size: " << ARRAY_SIZE(x) << std::endl;  // Output: 5

    // int x[5] = {15, 25, 35, 45, 55};
    // std::for_each(
    //     std::begin(x),
    //     std::end(x),
    //     [](int value) {
    //         std::cout << value << std::endl;
    //     }
    // );
    // int length  = sizeof(x) / sizeof(int);
    // y = {1,2,3,4,5};

    // std::cout << y[2] << std::endl;
    // std::cout << sizeof(y) / sizeof(int) << std::endl;
    // std::cout << x << std::endl;

    // int x[5] = {15, 25, 35, 45, 55};
    // for(int i = 0; i < 5;i++) {
    //     std::cout << &x[i] << std::endl;
    // }

    // int *xPtr = x;
    // xPtr++;
    // std::cout << *xPtr << std::endl;
    // std::cout << xPtr[2] << std::endl;
}

void PrintArray(int arr[], int length) { 
    for (int i = 0; i < length; i++) {
        cout << arr[i] << endl;
    }
}

void MaxArray(int arr[], int length) { 
    int maximum = arr[0];
    for (int i = 1; i < length; i++) {
        if(arr[i] > maximum ) { // *(arr + (i + 1))
            maximum = arr[i];
        }
    }

    std::cout << maximum << std::endl;
}

void reverseArray(int arr[], int length) { 
    int last = length - 1;
    for (int i = 0; i < length / 2; i++) {
        int current = arr[i];
        arr[i] = arr[last];
        arr[last] = current;
        last--;
    }

    PrintArray(arr, length);
}


// int length => 0x111111 => 5
// int a[length] => 0x2222222=> {5,7,2,12,1}
// int *aPtr => 0x33333333 => 0x111111


void findResult() { 
    const int length = 5;
    int a[length] = {5,7,2,12,1};
    int *aPtr = a;
    *(a + 3) = 5;
    int b = a[0] * *(a+2) - (a[1] + aPtr[4] - (*aPtr+4));
    aPtr += 2;
    aPtr[1] = 100;
    int c = a[4] - a[2] * *(aPtr - 1) + b;



    std::cout << c << std::endl;
}

void ArrayExersize() {
    int array[] = {1, 2, 3, 4, 5, 6};
    int length = sizeof(array) / sizeof(int);
    // PrintArray(array, length);
    // MaxArray(array, length);
    // reverseArray(array, length);
    // findResult();
}
void foo(char *z) {
    std::cout <<  z  <<  "new line" << std::endl;
}

void printYourName() {
    char title[] = "What is your name?";
    std::cout << title << "\n";

    char name[100];
    std::cin >> name;
    std::cout <<  "your name is "  <<  name << std::endl;

    // there is a way to write string more concis way

    std::string newName = "Your name";

}

void CharExersize() {
    // char text[] = {72,'e','l','l','o','\n',0};
    // char text[] = "Hello";
    // foo(text);
    // std::cout << static_cast<void*>(pText) << std::endl;
    // printYourName();
}

void StringExersize() {
    std::string messaeg = "Hello";
    std::string messaeg2 = "world this is fun";
    std::string messaeg3 = messaeg + messaeg2;
    int number = 55;
    int result = messaeg3.find("44");

    // std::cout << messaeg;
    // std::cout << "Hello" << "\n" << "Armenia" << "\n";
    // std::cout << messaeg3.length() << "\n";
    // std::cout << messaeg3.substr(6,4) << "\n";
    // std::cout << messaeg3 + " " + std::to_string(number) << "\n";
    std::cout << result << "\n";
}

void MultipleArray() {
    
}

void RepeatLessons() {
    std::cout << "=== Start Lessons 2 ===" << std::endl;
    // STD_CIN_LESSONS();
    // IF_AND_ELSE_LESSONS();
    // FOR_LOOP();
    // BOOLEAN_OPERATORS();
    // INCREASE_AND_DECREASE();
    // LoopsForWhile();
    // printHalfDiamond(5);
    // printDiamondTo_1_to_1(5);
    // printDiamondTo_1_to_2(5);
    // printIsPrimeNumber(100);
    // LOOP_EXERCIZE();
    // SWITCH_CASE();
    // FUNCTION();
    // PrimitiveDataType();
    // Pointer();
    // PointerExersize();
    // Array();
    // ArrayExersize();
    // CharExersize();
    // StringExersize();
    MultipleArray();

}