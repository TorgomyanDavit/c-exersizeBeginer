#include <iostream>
#include <type_traits>
#include <string>
#include <cstdint>
#include <vector>
#include <algorithm>
#include <string.h>
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
    std::cout <<  length  <<  "length" << std::endl;

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
    char text[] = {72,'e','l','l','o','\n',0};
    int length = sizeof(text) / sizeof(char);
    std::cout <<  length  <<  "length" << std::endl;

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
    // int a[10] = {1,2,3,4,5};
    // std::cout << *(*nestedArray + 4);
    // std::cout << "Number of columns: " << sizeof(nestedArray[0]) << std::endl;
    // std::cout << "Number of columns: " << sizeof(nestedArray) << std::endl;
    // nestedArray[2][2] = 100;
    // std::cout << nestedArray[2][2] << std::endl;
    // int nestedArray[3][5] = {
    //     {1, 2, 3, 4, 5},
    //     {6, 7, 8, 9, 10},
    //     {11, 12, 13, 14, 15}
    // };

    // int numRows = sizeof(nestedArray) / sizeof(nestedArray[0]);
    // int numCols = sizeof(nestedArray[0]) / sizeof(nestedArray[0][0]);

    // for(int i = 0; i < numRows; i++) {
    //     for(int i2 = 0; i2 < numCols; i2++) {
    //         std::cout << nestedArray[i][i2] << std::endl;
    //     }
    // }


    int nestedArray[3][3][5] = {
        {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15}
        },
        {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15}
        },
        {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15}
        }
    };

    int numRows = sizeof(nestedArray) / sizeof(nestedArray[0]);
    int numCols = sizeof(nestedArray[0]) / sizeof(nestedArray[0][0]);
    int thirdCols = sizeof(nestedArray[0][0]) / sizeof(nestedArray[0][0][0]);


    
    for(int i = 0; i < numRows; i++) {
        for(int i2 = 0; i2 < numCols; i2++) {
            for(int i3 = 0; i3 < thirdCols; i3++) {
                std::cout << nestedArray[i][i2][i3] << std::endl;
            }
        }
    }
    std::cout << "Number of columns: " << sizeof(nestedArray[0]) << std::endl;
}


void printBoard(char board[3][3],int numRows,int numCols) {
    
    for(int i = 0;i < numRows;i++) {
        for(int i2 = 0;i2 < numCols;i2++) {
            if(i2 != 0 && i2 != numCols)  {
                std::cout << " |";
            }
            std::cout << " " << board[i][i2];
        };
        if(i != numRows - 1) {
            std::cout << '\n'  << "---+---+---" << "\n";
        }
    };
    std::cout << "\n";
}

bool isLegalMove(int row,int column,char board[3][3],char empty) {
    return row >= 0 && row <= 2 && column >= 0 && column <= 2 && board[row][column] == ' ';
}

bool didWin(char board[3][3],char player,char empty) {
    if(
        (board[0][0] == player && board[0][1] == player && board[0][2] == player) || 
        (board[1][0] == player && board[1][1] == player && board[1][2]== player) || 
        (board[2][0] == player && board[2][1] == player && board[2][2]== player) || 

        (board[0][0] == player && board[1][0] == player && board[2][0]== player) || 
        (board[0][1] == player && board[1][1] == player && board[2][1]== player) || 
        (board[0][2] == player && board[1][2] == player && board[2][2]== player) || 

        (board[0][0] == player && board[1][1] == player && board[2][2]== player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0]== player)
    ) { return true; };
    
    return false;
}

bool didEnd(char board[3][3],int numRows,int numCols,char empty) {
    for(int i = 0;i < numRows;i++) {
        for(int i2 = 0;i2 < numCols;i2++) {
            if(board[i][i2] == empty)  {
                return false;
            }
        };
    };

    return true;
}

void TikTakToe() {
    const char xPlayer = 'x';
    const char oPlayer = 'o';
    const char empty = ' ';
    
    char player = xPlayer;


    char board[3][3]= {
        {empty, empty, empty},
        {empty, empty, empty},
        {empty, empty, empty},
    };
    int numRows = sizeof(board) / sizeof(board[0]);
    int numCols = sizeof(board[0]) / sizeof(board[0][0]);

    printBoard(board,numRows,numCols);

    int row,column;
    while(true) {
        std::cout << "now is playing" << "  " << player  << "Player" << std::endl;
        
        std::cout << "Please enter the row" << std::endl;
        std::cin >> row;

        std::cout << "Please enter the column" << std::endl;
        std::cin >> column;

        if(isLegalMove(row,column,board,empty) == false) { 
            std::cout << "not a legal move you lose" << std::endl;
            break;
        }

        board[row][column] = player; // fill field 

        if(didWin(board,player,empty) == true) {
            std::cout << "winner is " <<  player << std::endl;
            break;
        };

        if(didEnd(board,numRows,numCols,empty) == true) {
            std::cout << "game over is equal no onw did" <<  player << std::endl;
            break;
        };
        
        printBoard(board,numRows,numCols);

        if(player == xPlayer) {player = oPlayer;} else {player = xPlayer;} // change player 

    }
}

int zoo(int a, int b) {
    int d = a + b;
    return d;
}

int foo(int z, int d) {
    int b = z + d;
    int y = zoo(b, d);
    int u = zoo(y, z);

    return u;
}

void MemoryMenegmentStack() {
    int a = 1;
    int b = 2;
    int c = foo(a,b);
    int d = a + b;
    int e = foo(b, c);
    std::cout << c + e << std::endl;
}

// int* fooHeap() {
//     // int *a = new int(1); /** keep pointer in heap */
//     int a = 1;  /** DANGLING POINTER */

//     return &a; 
// }


int* fooHeap() {
    // int*a[3];  Dangling pointer
    int* a = new int[3]; 
    a[0] = 4;
    a[1] = 55;
    a[2] = 23;

    return a; 
}

void MemoryMenegmentHeap() {
    int *b = fooHeap();
    std::cout << *b << std::endl;
    delete[] b;
}


// class Rectangle {
//     private :
//         int foo;

//     public:
//         int width;
//         int height;
//         Rectangle(int w,int h) {
//             width = w;
//             height = h;
//             foo = 100;
//         };

//         ~Rectangle() {
//             std::cout << "Rectangle is delete from heap" << std::endl;
//         };
//         int area(int a);

//         // int area() {
//         //     return width * height * foo;
//         // }
// };

// int Rectangle::area(int a) {
//     return width * height * foo;
// }

// class Rectangle {
//     public:
//         int width;
//         int height;

//         Rectangle() {
//             width = 10;
//             height = 20;
//         };
//         Rectangle(int w) {
//             width = w;
//             height = 20;
//         };
//         Rectangle(int w,int h) {
//             width = w;
//             height = h;
//         };
//         ~Rectangle() {
//             std::cout << "Destraktor Rectangle is delete from heap" << std::endl;
//         };
//         int area() {
//             return width * height;
//         }
//         int area(int foo) {
//             return foo * 2;
//         }
//     private:
//     protected:
// };


// void foo(Rectangle z) {
//     z.width = 3;
//     std::cout << z.width << std::endl;
// };

// void foo(Rectangle *z) {
//     (*z).width = 3;
// };

// Rectangle foo() {
//     Rectangle a(7);
//     return a;
// };

/** A `struct` is similar to a `class`, but one key difference is that members of a 
 * `struct` are public by default, so you don’t need to explicitly write the `public` keyword for them. In contrast, members of a `class` are private by default unless specified otherwise.
*/
// struct Rectangle {
//     int width;
//     int height;

//     Rectangle() {
//         width = 10;
//         height = 20;
//     };
//     Rectangle(int w) {
//         width = w;
//         height = 20;
//     };
//     Rectangle(int w,int h) {
//         width = w;
//         height = h;
//     };
//     ~Rectangle() {
//         std::cout << "Destraktor Rectangle is delete from heap" << std::endl;
//     };
//     int area() {
//         return width * height;
//     }
//     int area(int foo) {
//         return foo * 2;
//     }
//     private:
//     protected:
// };

// class Rectangle {
//     public :
//         int width;
//         int height;
//     Rectangle() {
//         width = 10;
//         height = 20;
//     };
//     Rectangle(int w) {
//         width = w;
//         height = 20;
//     };
//     Rectangle(int w,int h) {
//         width = w;
//         height = h;
//     };
//     ~Rectangle() {
//         std::cout << "Destraktor Rectangle is delete from heap" << std::endl;
//     };
//     int area() {
//         return width * height;
//     }
//     int area(int foo) {
//         return foo * 2;
//     }
//     private:
//     protected:
// };

void ClassesLessons() {
    // Rectangle a(7);
    // foo(a);
    // std::cout << a.width << std::endl;

    // foo(&a); =>  3 referance pointer
    // foo(&a); =>  3 referance pointer

    // Rectangle *a = new Rectangle(4,3);
    // std::cout << (*a).width << " pointer way it some for (*a).width " << a -> width << std::endl;
    // delete a;

    // Rectangle r2;
    // r2.width = 150;
    // r2.height = 900;
}

void StructLessons() {
    // Rectangle a(7);
    // foo(a);
    // std::cout << a.area() << std::endl;
    // foo(&a); =>  3 referance pointer
    // foo(&a); =>  3 referance pointer

    // Rectangle *a = new Rectangle(4,3);
    // std::cout << (*a).width << " pointer way it some for (*a).width " << a -> width << std::endl;
    // delete a;

    // Rectangle r2;
    // r2.width = 150;
    // r2.height = 900;
}

void refFoo(int *b) {
    *b = 50;
    std::cout << "Address of b: " << &b << std::endl; // Get the address of b
}


void someFoo(int &b) {
    b = 50;
    std::cout << "Value of b: " << b << std::endl;
    std::cout << "Address of b: " << &b << std::endl; // Get the address of b
}


int References() {
    int a = 10;
    refFoo(&a);
    // someFoo(a);

    std::cout << "Address of b: " << &a << std::endl; // Get the address of b
}

class CopyConstructors {
    public:
        int bar;
        char *buffer;

        // char buffer[6];
        // char buffer[6] = {72,'e','l','l','o',0};

        CopyConstructors() {
            std::cout << "Constructor" << std::endl;
            buffer = new char[6];
            buffer[0] = 'H';
            buffer[1] = 'e';
            buffer[2] = 'l';    
            buffer[3] = 'l';
            buffer[4] = 'o';
            buffer[5] = '\0';
            // bar = 100; // Initialize bar
        }
        CopyConstructors(const CopyConstructors &other) {
            std::cout << "Constructor Copy" << std::endl;
            int size = strlen(other.buffer) + 1;
            // std::cout << size << "size" << std::endl;

            buffer = new char[size];
            for (int i = 0; i < size; i++) {
                buffer[i] = 'd';
            }
            buffer[size - 1] = '\0'; // Null terminator

            // memccpy(buffer, other.buffer, '\0', size);

        } 
        ~CopyConstructors() {
            std::cout << "Destructor for delete heap info" << std::endl;
            delete buffer;
        }
};

void Func(CopyConstructors b) {
    std::cout << "CopyConstructors b" << std::endl;
    std::cout << b.bar << std::endl;
    b.bar = 100;
    b.buffer[0] = 'A';

    std::cout << b.buffer << " b.buffer" << std::endl;
}

void RepeatLessons() {
    std::cout << "=== Start Lessons 2 ===" << std::endl;
    CopyConstructors a;
    a.bar = 10;
    Func(a);

    std::cout << a.bar << " a.bar" << std::endl;
    std::cout << a.buffer << " a.buffer" << std::endl;

    // std::cout << "CopyConstructors a" << std::endl;



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
    // MultipleArray();
    // TikTakToe();
    // TikTakToe();
    // MemoryMenegmentStack();
    // MemoryMenegmentHeap();
    ClassesLessons();
    // StructLessons();
    // References();
    /* 
        CopyConstructors a;
        a.bar = 10;
        Func(a);
    */


}

// // I write hear this to every time rember how work dangling pointer
// int* DanglingHeap() {
//     // int *a = new int(1); /** keep pointer in heap */
//     int a = 1;  /** DANGLING POINTER */

//     return &a; 
// }