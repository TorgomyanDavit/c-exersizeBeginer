#include <iostream>
#include <thread>
#include <chrono>
#include <iostream>
#include <cstdint> // Include the necessary header for int8_t
#include <cmath>
#include <limits>
#include <string>
#include <climits>
#include <cstdint>
#include <cfloat>


#define RESET    "\033[0m"
#define BLACK    "\033[30m"
#define RED      "\033[31m"
#define GREEN    "\033[32m"
#define YELLOW   "\033[33m"
#define BLUE     "\033[34m"
#define MAGENTA  "\033[35m"
#define CYAN     "\033[36m"
#define WHITE    "\033[37m"

#define BBLACK   "\033[40m"
#define BRED     "\033[41m"
#define BGREEN   "\033[42m"
#define BYELLOW  "\033[43m"
#define BBLUE    "\033[44m"
#define BMAGENTA "\033[45m"
#define BCYAN    "\033[46m"
#define BWHITE   "\033[47m"

#define BOLD     "\033[1m"
#define ITALIC   "\033[3m"
#define UNDERLINE "\033[4m"
#define DIM      "\033[2m"
#define BLINK    "\033[5m"
#define REVERSE  "\033[7m"
#define HIDDEN   "\033[8m"
#define BMAGENTA "\033[45m"




// important to know all types bytes
void getAllTypeValueMax() {
    
    std::cout << ITALIC << RED ;
    std::cout << "Maximum and Minimum values for integer types:" << std::endl;

    // char
    std::cout << "char: " << CHAR_BIT << " bits, " << CHAR_BIT / 8 << " bytes, " << static_cast<int>(SCHAR_MIN) << " to " << static_cast<int>(SCHAR_MAX) << std::endl;
    std::cout << "unsigned char: " << CHAR_BIT << " bits, " << CHAR_BIT / 8 << " bytes, " << 0 << " to " << static_cast<unsigned int>(UCHAR_MAX) << std::endl;

    // short
    std::cout << "short int: " << sizeof(short) * CHAR_BIT << " bits, " << sizeof(short) << " bytes, " << SHRT_MIN << " to " << SHRT_MAX << std::endl;
    std::cout << "unsigned short int: " << sizeof(unsigned short) * CHAR_BIT << " bits, " << sizeof(unsigned short) << " bytes, " << 0 << " to " << static_cast<unsigned int>(USHRT_MAX) << std::endl;

    // int
    std::cout << "int: " << sizeof(int) * CHAR_BIT << " bits, " << sizeof(int) << " bytes, " << INT_MIN << " to " << INT_MAX << std::endl;
    std::cout << "unsigned int: " << sizeof(unsigned int) * CHAR_BIT << " bits, " << sizeof(unsigned int) << " bytes, " << 0 << " to " << UINT_MAX << std::endl;

    // long
    std::cout << "long int: " << sizeof(long) * CHAR_BIT << " bits, " << sizeof(long) << " bytes, " << LONG_MIN << " to " << LONG_MAX << std::endl;
    std::cout << "unsigned long int: " << sizeof(unsigned long) * CHAR_BIT << " bits, " << sizeof(unsigned long) << " bytes, " << 0 << " to " << ULONG_MAX << std::endl;

    // long long
    std::cout << "long long int: " << sizeof(long long) * CHAR_BIT << " bits, " << sizeof(long long) << " bytes, " << LLONG_MIN << " to " << LLONG_MAX << std::endl;
    std::cout << "unsigned long long int: " << sizeof(unsigned long long) * CHAR_BIT << " bits, " << sizeof(unsigned long long) << " bytes, " << 0 << " to " << ULLONG_MAX << std::endl;

    // float
    std::cout << "float: " << FLT_MANT_DIG << " bits, " << sizeof(float) << " bytes, " << FLT_MIN << " to " << FLT_MAX << std::endl;

    // bool
    std::cout << "bool: At least " << sizeof(bool) * CHAR_BIT << " bits, " << sizeof(bool) / 8 << " bytes, " << false << " to " << true << std::endl;

    // double
    std::cout << "double: " << DBL_MANT_DIG << " bits, " << sizeof(double) << " bytes, " << DBL_MIN << " to " << DBL_MAX << std::endl;

    // Increment and Decrement
    int x = INT_MAX;
    std::cout << "Increment INT_MAX: " << ++x << std::endl; // Increment INT_MAX
    x = INT_MIN;
    std::cout << "Decrement INT_MIN: " << --x << std::endl; // Decrement INT_MIN





    std::cout << RESET << std::endl;
    std::cout  << "---------------------------------------------" << std::endl; 
}