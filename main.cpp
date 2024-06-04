#include "./all_int_bite_value.cpp"
#include "./arrayExersize.cpp"
#include "./sortingAlgoritm.cpp"
#include "./char.cpp"
#include "./repeatLessons.cpp"




#include <iostream>
#include <fstream> // Required for file handling
#include <cstdint> // Include the necessary header for int8_t
#include <cmath>
#include <limits>
#include <string>
#include <climits>
#include <cstdint>
#include <cfloat>
#define RESET    "\033[0m"


// #include <cstdind>
// using namespace std;// if use (using namespace std) cout << "Hello world" << endl you can write without std:: typing;


/**struct */
// class EmptyClass {
//     int a = 55;
// };
// EmptyClass obj;
// char myLetter = 97; 

// struct {
//     int myNum;
// } myStructure;

// myStructure.myNum = 5;
// std::cout << myStructure.myNum << std::endl;

// std::cout << "Size of an empty class: " << sizeof(obj) <<  std::endl;
// std::cout << myLetter << std::endl;

/* Lessons 1 console.log(""Hello world"") */
// int main() {
//     std::cout << "Hello world" << std::endl; // console.log(""Hello world"")
//     return 0; // if return 1; its mean that we say to operating sistem my code have problem but return 0 not have problem;
// }

/* Lessons 2 using namespace std */
// std::cout is a C++ standard library object used for output to the console.
// std::endl inserts a newline and flushes the output stream
// int main() {
//     cout << 5 << endl << 50 ;
//     return 0; // if return 1; its mean that we say to operating sistem my code have problem but return 0 not have problem;
// }

/* Lessons 3 Math operators (+ - * / %) */ 
// int main() {
//     // std::cout << 5 + 6 << std::endl; 
//     // std::cout << 5 + 9 << std::endl; 
//     // std::cout << 5 + 25 << std::endl; 
//     // std::cout << 8 % 2 << std::endl; // get remender  
//     std::cout << 5 + 6 * 7 << std::endl; 
//     return 0; 
// }

/* Lessons 4 Variable and scope */ 
// int age = 0, uncleage = 10;
// int main() {
//     int age = 1, uncleage = 10;
//     cout << "age => " << age << endl; 
//     {
//         int age = 2;
//         cout << "age => " << age << endl; 
//         {
//             int age = 3;
//             int count = 3;
//             cout << "age => " << age << endl; 
//         }
//     }
//     return 0; 
// }

/* Lessons 5 std::cin >> x; comand look like js prompt() function in terminal*/ 
// int main() {
//     int x;
//     std::cin >> x;
//     std::cout << x + 10 << std::endl; 
//     return 0; 
// }

/* Lessons 6 if() else () bool >> x; comand*/ 
// int main() {

     

//     /* 1 */
//     // int x;
//     // std::cin >> x;

//     // if(x > 10) {
//     //     std::cout << 10 <<  std::endl;
//     // }

//     // if(x > 11) {
//     //     std::cout << 11 <<  std::endl; 
//     // }

//     /* 2 */
//     // when declare bool it say that values is 0 or not  it is 1; -100 and 100 value if it bool mean that is not 0 i.e >> 1
//     // bool r = -100; // 1
//     // bool r = 100; // 1
//     // cout << r << endl;
//     // int x;
//     // std::cin >> x;
//     // bool r = (x > 10);
//     // if(r == true) { // true == 1, false == 0
//     //     cout << "r == true" << std::endl;
//     // }

//     // if (r == false) {
//     //     cout << "r == false" << std::endl;
//     // } else {
//     //     cout << "boom" << std::endl;
//     // }

//     // std::cout << r << std::endl; 
//     // std::cout << true << std::endl; // 1
//     // std::cout << false << std::endl; // 0

//     // if(x == y) {
//     //     std::cout << "x == y" <<  std::endl; 
//     // } else if(x < y) {
//     //     std::cout << "x < y" << std::endl; 
//     // } else if(x > y){
//     //     std::cout << "x > y" << std::endl; 
//     // } else {
//     //     std::cout << "you write not int" << std::endl;
//     // }

//     // std::cout << "x =" << x << std::endl;
//     // std::cout << "y =" << y << std::endl;

//     return 0; 
// }

/* Lessons 7 if() else () example >> x; comand*/ 
// int main() {
//     int x;
//     std::cin >> x;
//     // &&
//     // if(x > 10 && x < 20) {
//     //     std::cout << 1 << std::endl;
//     // } else {
//     //     std::cout << 0 << std::endl;
//     // }
//     // ||
//     // if(!!!(x < 0 || (x > 10 && x < 100))) {
//     //     std::cout << 1 << std::endl;
//     // } else {
//     //     std::cout << 0 << std::endl;
//     // }
//     // if(!0) { // true
//     //     std::cout << 1 << std::endl;
//     // } else {
//     //     std::cout << 0 << std::endl;
//     // }
//     std::cout << "x==" << x << std::endl;
//     return 0; 
// }

/*Lessons 8  exersize >> x; comand*/ 
// int main() {
//     // int x; 
//     // std::cin >> x;
//     // exersize 1
//     // if(x > 10) {
//     //     std::cout << "x > 10" << std::endl;
//     // } else {
//     //     std::cout << "x < 10" << std::endl;
//     // }
//     // exersize 2
//     // if(x > 10) {
//     //     std::cout << "x > 10" << std::endl;
//     // } else {
//     //     std::cout << "x < 10" << std::endl;
//     // }
//     // exersize 3
//     // int x,y,z; 
//     // std::cin >> x >> y >> z;
//     // if(z == 1) { //x + y
//     //     std::cout << x + y << std::endl;
//     // } else if(z == 2) { //x + y
//     //     std::cout << x - y << std::endl;
//     // } else if(z == 3) { //x + y
//     //     std::cout << x * y << std::endl;
//     // } else if(z == 4) { //x + y
//     //     std::cout << x / y << std::endl;
//     // } else if(z == 5) { //x + y
//     //     std::cout << x % y << std::endl;
//     // } else {
//     //     std::cout << -1 << std::endl;
//     // }
//     // exersize 4
//     // int x; 
//     // std::cin >> x;
//     // if(x > 0 && x <= 10 ) {
//     //     std::cout << 1 << std::endl;
//     // }
//     // exersize 5
//     // int x; 
//     // std::cin >> x;
//     // if(!(x > 0 && (x <= 10 || (x >= 50 && x != 60)))) {
//     //     std::cout << 1 << std::endl;
//     // } else {
//     //     std::cout << 0 << std::endl;
//     // }
//     // exersize 6
//     // int x; 
//     // std::cin >> x;
//     // bool z = x > 23 && (x > 100 && !(x == 120));
//     // bool d = ((x % 2) == 0);
//     // int y = z + d;
//     // if(y > 1) {
//     //     std::cout << y << std::endl;
//     // } else {
//     //     std::cout << 0 << std::endl;
//     // }
//     // exersize 7
//     // int x; 
//     // std::cin >> x;
//     // bool f = x != 20 && (x >= 10 || (x <= 4)); // false => 0
//     // bool d = !!!f; // false => 1
//     // int a = 24;
//     // bool c = a; // 1
//     // int n = f + d + a + c;
//     // std::cout << n << std::endl;
//     return 0; 
// }

/*Lessons 9  decrease and encrease; i++ i-- i+=10 i-=10 i%=2 i/=2 i*=2  comand*/ 
// int main() {
//     int i = 10;
//     // i += 2;
//     // i++;
//     // int x = --i;
//     // int x = i++;
//     i *= 5;
//     std::cout << i << endl;
//     return 0;
// }

/*Lessons 10 while for*/ 
// int main() {
//     /* 1 */
//     // int x;
//     // std::cin >> x;
//     // if(x == 10) {
//     //     std::cout << 10 << endl;
//     // } else {
//     //     std::cout << -1 << endl;
//     // }
//     /* 2 loop while*/
//     // int i;
//     // std::cin >> i;
//     // while(i > 0) {
//     //     std::cout << "loop count =>" << i << endl;
//     //     i--;
//     // }
//     /* 3 loop for */
//     // for (int i = 1; i <= 10; i++) {
//     //     cout << "loop count =>" << i << endl;
//     // }
//     /* 4 loop for */
//     // int sum = 0;
//     // int x = 0;
//     // do {
//     //     std::cin >> x;
//     //     sum += x;
//     // } while(x != 0);
//     /* 5 loop for */
//     //     int sum = 0;
//     //     int x = 0;
//     //     for (int i = 1; i <= 10; i++) {
//     //         if(i % 2 != 0) {
//     //             continue;
//     //         }
//     //         if(i == 8) {
//     //             break;
//     //         }
//     //         std::cout << i << "even" << endl;
//     //     }
//     //     std::cout << "end" << endl;
//     //     return 0;   
// }

/*Lessons 11 exersize loop */ 
// int main() {
//     // exersize 1
//     // int i = 1;
//     // while (i <= 10){
//     //     std::cout << "loop count =>" << i << std::endl; 
//     //     i++;
//     // }
//     // cout << "start for loop" << endl; 
//     // for (int i = 5; i <= 20; i++) {
//     //    std::cout << "loop count =>" << i << std::endl; 
//     // }

//     // exersize 2
//     // int i;
//     // std::cin >> i;

//     // while (i > 0) {
//     //     std::cout << i << std::endl;
//     //     i--;
//     // }

//     // for (int x = i; x > 0; x--) {
//     //    std::cout << "loop count =>" << x << std::endl; 
//     // }

//     // // exersize 3
//     // int i;
//     // std::cin >> i;

//     // for (int x = 1; x <= i; x++) {
//     //    std::cout << "loop count =>" << x << std::endl; 
//     // }

//     // exersize 4
//     // int i = 0;
//     // while (i <= 5) {
//     //     std::cout << i << std::endl;
//     //     i+=2;
//     // }
//     // std::cout << "while end" <<  std::endl; 
//     // std::cout << i << std::endl;
//     // std::cout << "loop end" <<  std::endl; 

//     // // exersize 5
//     // int i;
//     // int sum = 0;
//     // std::cin >> i;
//     // while (i > 0) {
//     //     sum += i;
//     //     i--;
//     // }
//     // std::cout << sum << std::endl; 

//     // exersize 7
//     // int i;
//     // int sum = 0;
//     // std::cin >> i;
//     // for (int x = 0; x <= i; x++) {
//     //     // x === 2 
//     //     if(x % 2 != 0) {
//     //         sum += x;
//     //     }
//     // }
//     // std::cout << sum << std::endl; 

//     // exersize 9
//     // int allCount;
//     // std::cin >> allCount;
//     // for (int xCount = 1; xCount < allCount; xCount += 2) {
//     //     for (int yCount = 1; yCount <= xCount; yCount++) {
//     //         std::cout << 1; 
//     //     }
//     //     std::cout << std::endl; 
//     // }

//     // for (int xCount = allCount; xCount >= 1; xCount -= 2) {
//     //     for (int yCount = 1; yCount <= xCount; yCount++) {
//     //         std::cout << 1; 
//     //     }
//     //     std::cout << std::endl; 
//     // }
//     // exersize 10
//     // int allCount;
//     // std::cin >> allCount;
//     // int ones = 1;
//     // for (int xCount = 1; xCount <= allCount; xCount++) {
//     //     for (int yCount = 1; yCount <= ones; yCount++) {
//     //         std::cout << 1; 
//     //     }
//     //     std::cout << std::endl; 
//     //     if(xCount > allCount / 2) {
//     //         ones -= 2;
//     //     } else {
//     //         ones += 2;
//     //     }
//     // }

//     // exersize 11
//     // int allCount;
//     // std::cin >> allCount;
//     // for (int i = 2; i <= 100; i++) {
//     //     bool found = false;
//     //     for (int x = 2; x < i; x++) {
//     //         if(i % x == 0) {
//     //             found = true;
//     //             break;
//     //         }
//     //     }
//     //     if(found == false) {
//     //         std::cout << i << std::endl; 
//     //     }
//     // }
//     return 0;
// }

// exersizes 12
// void printDiamond(int n) {
//     for (int i = 1; i <= n; i++) {
//         for (int emptyCount = 1; emptyCount <= n - i; emptyCount++) {
//             std::cout << "_";
//         }
//         for (int dimondsCount = 1; dimondsCount <= 2 * i - 1; dimondsCount++) {
//             std::cout << 1;
//         }
//         std::cout << std::endl;
//     }
    
//     for (int i = n - 1; i >= 1; i--) {
//         for (int emptyCount = 1; emptyCount <= n - i; emptyCount++) {
//             std::cout << " ";
//         }
//         for (int dimondsCount = 1; dimondsCount <= 2 * i - 1; dimondsCount++) {
//             std::cout << 1;
//         }
//         std::cout << std::endl;
//     }
// }

// int main() {
//     int height = 5;  // Change this value to adjust the size of the diamond
//     printDiamond(height);
//     return 0;
// }

// lessons 12 switch case
// void printDiamond(int n) {
//     // if( n == 1) {
//     //     std::cout << n << std::endl;
//     // } else if( n == 2) {
//     //     std::cout << n << std::endl;
//     // } else if( n == 3) {
//     //     std::cout << n << std::endl;
//     // } else if( n == 4) {
//     //     std::cout << n << std::endl;
//     // } else if( n == 5) {
//     //     std::cout << n << std::endl;
//     // }
//     switch (n) {
//     case 1:
//         std::cout << "Hello" << std::endl;
//         break;
//     case 2:
//         std::cout << "World" << std::endl;
//         break;
//     case 3:
//         std::cout << "Goodbye" << std::endl;
//         break;
//     default:
//         std::cout << "Invalid choice" << std::endl;
//         break;
//     }
// }
// int main() {
//     int height; 
//     std::cin >> height;
//     printDiamond(height);
//     return 0;
// }


// lessons 13 Function
// void print(int z) {
//     std::cout << z << std::endl;
// }

// int add(int a,int b) {
//     return a * b;
// }

// int main() {
//     int x = add(1, 10);
//     int y = add(2, 10);
//     print(x);
//     print(y);

//     std::cout << "end" << std::endl ;
//     return 0;
// }


// Primitive type Lessons 14
// int main() {
    // this use 2**7 astichan; ajsinqn 7 bit ogtagorcum 1 byte; unsigned i _ depqum bacasakan tver chka dra hamar 1 bite avelanuma u darnuma 8 astichan
    // char i = 127;

    // this use 2**15 astichan;  ajsinqn 15 bit ogtagorcum 2 byte;  stex kara lini nayev - 32767
    // short int i = 32767;

    // this use 2**16 astichan; ajsinqn 16 bit ogtagorcum 2 byte; unsigned i depqum  bacasakan tver - chka dra hamar 1 bite avelanuma u darnuma 16 astichan
    // unsigned short int i = 65535;

    // this use 2**31 astichan; ajsinqn 31 bit ogtagorcum 4 byte;
    // int i = 2147483647;

    // this use 2**32 astichan; ajsinqn 32 bit ogtagorcum 4 byte;
    // unsigned int i = 4294967295;

    // this use 2**63 astichan; ajsinqn 63 bit ogtagorcum 4 byte; unsigned i _ depqum bacasakan tver chka dra hamar 1 bite avelanuma u darnuma 64 astichan
    // long int i = 922337203685477580;

    // this use 2**63 astichan; ajsinqn 63 bit ogtagorcum 4 byte; unsigned i _ depqum bacasakan tver chka dra hamar 1 bite avelanuma u darnuma 64 astichan
    // long long int i = 922337203685477580;

    // this use 2**8 astichan; ajsinqn 8 bit ogtagorcum 1 byte; unsigned i _ depqum bacasakan tver chka dra hamar 1 bite avelanuma u darnuma 8 astichan,
    // it can use ascii characters example "a" and it has int value 97 ; 
    // unsigned char i = 97;
    // short int z = i + 10;



    // Size of բոլորը նվազագույն արժեքներն են ;
    // char i = 'a';      // 1 byte
    // short int i = 1;   // 2 byte
    // int i = 1;         // 2 byte
    // long int i = 1;       // 4 byte
    // long long int i = 1;  // 8 byte

    // instead of this i can use #include <cstdint>
    // int8_t i = 'a';       // 1 byte   uint8_t i = 'a';      // 1 byte Unsigned
    // int16_t i = 'a';      // 2 byte   uint8_t i = 'a';      // 1 byte Unsigned
    // int32_t i = 'a';      // 4 byte   uint8_t i = 'a';      // 1 byte Unsigned
    // int64_t i = 'a';      // 8 byte   uint8_t i = 'a';      // 1 byte Unsigned


    // double is used 8 byte i.e 64 bite
    // double i = 14.5;

    // float is used byte byte i.e 32 bite
    // float i = 14.5f;

    // bool used 1 byte i.e 7 bite
    // bool i = false;

    // void funbction() {
        // std::cout << i << std::endl;
    // }
    // std::cout << ((0.1 + 0.2) == (0.3)) << std::endl;
    // return 0;
// }


// Lessons 15 Pointers type 
// int main() {
//     int i = 25;
//     int *iPointer = &i;
//     *iPointer = 10;
//     int **iPointer2 = &iPointer;
//     int ***iPointer3 = &iPointer2;
//     // std::cout << i  <<  "i" <<  std::endl;
//     // std::cout << iPointer  <<  "*iPointer" <<  std::endl;
//     // std::cout << sizeof(&i)  <<  "sizeof(&i)" <<  std::endl; get Byte 4
//     // std::cout << *iPointer <<  std::endl; Get i value  whish is 25;
//     // std::cout << i <<  std::endl; // Get this value *iPointer = 10; 
//     std::cout << iPointer <<  std::endl; 
//     std::cout << iPointer2 <<  std::endl; 
//     std::cout << **iPointer2 <<  std::endl; 
//     return 0;
// }

// int swap(int *a /**0x001*/,int *b /**0x002*/) {
//     int z = *a; // z:0x03 | 25
//     *a = *b;    // *a = 6
//     *b = z;     // *b = 25
// }

// int main() {
//     int i = 25; // i:0x001 | 25
//     int d = 6; // d:0x002 | 6
//     swap(&i,&d);

//     std::cout << i <<  std::endl; 
//     return 0;
// }



// Lessons 15 exersize Pointers type 

// int f(int x,int*py,int **ppz) {
//     int y;
//     int z;
//     **ppz += 1;
//     z = **ppz; 
//     *py += 2;
//     y = *py;
//     x += 3;

//     return x + y + z;
// }

// լեսսօնս 16
/** Pointers */
// int *x;
// int y = 6;
// x = &y;
// y = 80;
// *x += 5;
// std::cout << "Size of int: " << y << std::endl;


// int a = 500;
// int b = 10;
// int *d = &a;
// int *z = &b;
// d = z;
// *d += 20;
// std::cout << "Size of int: " << a << std::endl;
// std::cout << "Size of int: " << b << std::endl;


// int x[10] = {1,2,3,4,5};
/** this way know array length */
// std::cout << "console " << sizeof(x) / sizeof(int) << std::endl;

// int x[10] = {155,92,3,4,5};
// int *xPtr = x;
// x = x + 1;
// std::cout << "console " << *(x) << std::endl;
// std::cout << "length " << sizeof(x) / sizeof(int) << std::endl;



/*
    name    address     value   
    c       0x001       8       
    b       0x002       0x001
    a       0x003       0x002       
    x       0x004       8
    py      0x005       0x001
    ppz     0x006       0x002      
    z       0x007       6 
    y       0x008       8
*/




// int main() {
    // exersize 1
    // double a = 10; 
    // double *b = &a; 

    // exersize 2
    // double a = 10; 
    // int val = *(&(*(&a)));

    // exersize 3
    // int a = 5;
    // int b = 10;
    // int *c = &a;
    // int d = *c + b + (*(&a));
    // *c = d * 2;

    // exersize 4
    // double a = 4.2;
    // double b = 2;
    // double *c = &b;
    // *c = (*(&b)) * (*(&a)) * 2;

    // exersize 5
    // double d = 4.3;
    // double q = 1.5;
    // double *ptr = &d;
    // (*ptr)++;
    // *ptr = q;

    // exersize 6
    // int a = 7;
    // int b = 13;
    // int *c = &b;
    // *c = 2;

    // exersize 7
    // int a = 500;
    // int b = 10;
    // int *d = &a,  *z = &b;
    // d = z;
    // *d += 20;

    // exersize 8
    // int c, *b, **a;
    // c = 5;
    // b = &c;
    // a = &b;
    // std::cout << f(c, b , a) << std::endl;

    // exersize 9
    // int arr[] = {5, 9};
    // int * arrPtr = arr;
    // arrPtr++;
    // std::cout << &arr[0] << std::endl;
    // std::cout << &arr[1] << std::endl;
    // std::cout << arrPtr << std::endl;

    // std::cout << &arr[1] << std::endl;
    // std::cout << &arrPtr[1] << std::endl;

    // std::cout << arr[0] << std::endl; // 8
    // std::cout << arrPtr[0] << std::endl; // 8

    // std::cout << average(arr) << std::endl; 
    // std::cout << sizeof(arr) << std::endl; 


//     return 0;
// }

// int countArrayLength(int *arr, int length) {
//     int result = 0;
//     for (int i = 0; i < length; i++) {
//         result = result + arr[i];
//     }
//     std::cout << "Array length: " << length << std::endl;

//     return result;
// }

// int main() {
//     int arr[] = {1, 8, 3, 4, 8};
//     // int length = sizeof(arr) / sizeof(int);
//     // int sum = countArrayLength(arr, length);

//     // std::cout << "Sum of array elements: " << arr[1] << std::endl;
//     // std::cout << "Sum of array elements: " << sum << std::endl;


//     return 0;
// }

// void getColoredText() {
//     std::cout << RED << "This is red text." << RESET << std::endl;
//     std::cout << GREEN << "This is green text." << RESET << std::endl;
//     std::cout << YELLOW << "This is yellow text." << RESET << std::endl;
//     std::cout << BLUE << "This is blue text." << RESET << std::endl;
//     std::cout << RESET << std::endl;
//     std::cout << "end Color" << std::endl;
// }




// int sum(int k) {
//     int result = 0;
//     for (int i = 1; i <= k; ++i) {
//         result += i;
//     }
//     return result;
// }

// class MyClass {       // The class
//     public:             // Access specifier
//         int myNum;        // Attribute (int variable)
//         string myString;  // Attribute (string variable)

//     public:              // Access specifier
//         void myMethod() {  // Method/function defined inside the class
//         cout << "Hello World!" << "\n";
//     }

//     public:              // Access specifier
//         void myMethod2();
// };

// // Method/function definition outside the class
// void MyClass::myMethod2() {
//     cout << "Hello World!";
// }


// void getExampleClass() {
//     string cars[] = {"Volvo", "BMW", "Ford"}; // Also three array elements
//     int length = sizeof(string);
//     string letters[3][4] = {
//         { "A", "B", "C", "D" },
//         { "E", "F", "G", "H" },
//         { "E", "F", "G", "H" }
//     };
//     // cout << letters[0][2];  // Outputs "C"

//     struct {
//         string brand;
//         string model;
//         int year;
//     } myCar1, myCar2; // We can add variables by separating them with a comma here

//     myCar1.brand = "BMW";
//     myCar2.brand = "MERCEDES";
//     // cout << myCar1.brand << "\n";  
//     // cout << myCar2.brand << "\n";  


//     string food = "Pizza";
//     string *meal = &food;
//     // cout << &food << "\n";
//     // cout << meal << "\n";

//     int result = sum(10);
//     // cout << result ;

//     // class MyClass {       // The class
//     //     // public:             // Access specifier
//     //     //     int myNum;        // Attribute (int variable)
//     //     //     string myString;  // Attribute (string variable)

//     //     // public:              // Access specifier
//     //     //     void myMethod() {  // Method/function defined inside the class
//     //     //     cout << "Hello World!" << "\n";
//     //     // }

//     //     public:              // Access specifier
//     //         void myMethod();
//     // };


//     MyClass myObj; 
//     myObj.myNum = 15; 
//     myObj.myMethod();
//     // cout << myObj.myNum << "\n";

// }

// number > 0x0001 = {2, 4, 6, 8, 10, 12}; 
// *ptr   > 0x0002 = 0x0003
// temp   > 0x0003 = 2
void getParentMain() {
    // getExampleClass();
    // getColoredText();
    // getCharValue();
    // arrayInit();
    // sortingAlgoritm();


    // Կրկնում եմ անցացը

    RepeatLessons();



}






// important to know all types bytes
int main() {
    getAllTypeValueMax();



    /* start*/
    // getParentMain();
    return 0;
}