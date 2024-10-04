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




// important to know all types bytes
void getAllTypeValueMax() {

    std::cout << "=== Maximum and Minimum values for integer types ===" << std::endl;

    // char
    signed char x_char;
    unsigned char x_uchar;
    std::cout << "char (signed): " << CHAR_BIT << " bits, " << CHAR_BIT / 8 << " bytes, " 
              << static_cast<int>(SCHAR_MIN) << " to " << static_cast<int>(SCHAR_MAX) 
              << " (Example: signed char x_char;)" << std::endl;
    std::cout << "unsigned char: " << CHAR_BIT << " bits, " << CHAR_BIT / 8 << " bytes, " 
              << 0 << " to " << static_cast<unsigned int>(UCHAR_MAX) 
              << " (Example: unsigned char x_uchar;)" << std::endl;

    // short
    short int x_short;
    unsigned short int x_ushort;
    std::cout << "short int: " << sizeof(short) * CHAR_BIT << " bits, " << sizeof(short) 
              << " bytes, " << SHRT_MIN << " to " << SHRT_MAX 
              << " (Example: short int x_short;)" << std::endl;
    std::cout << "unsigned short int: " << sizeof(unsigned short) * CHAR_BIT << " bits, " 
              << sizeof(unsigned short) << " bytes, " << 0 << " to " << USHRT_MAX 
              << " (Example: unsigned short int x_ushort;)" << std::endl;

    // int
    int x_int;
    unsigned int x_uint;
    std::cout << "int: " << sizeof(int) * CHAR_BIT << " bits, " << sizeof(int) 
              << " bytes, " << INT_MIN << " to " << INT_MAX 
              << " (Example: int x_int;)" << std::endl;
    std::cout << "unsigned int: " << sizeof(unsigned int) * CHAR_BIT << " bits, " 
              << sizeof(unsigned int) << " bytes, " << 0 << " to " << UINT_MAX 
              << " (Example: unsigned int x_uint;)" << std::endl;

    // long
    long int x_long;
    unsigned long int x_ulong;
    std::cout << "long int: " << sizeof(long) * CHAR_BIT << " bits, " << sizeof(long) 
              << " bytes, " << LONG_MIN << " to " << LONG_MAX 
              << " (Example: long int x_long;)" << std::endl;
    std::cout << "unsigned long int: " << sizeof(unsigned long) * CHAR_BIT << " bits, " 
              << sizeof(unsigned long) << " bytes, " << 0 << " to " << ULONG_MAX 
              << " (Example: unsigned long int x_ulong;)" << std::endl;

    // long long
    long long int x_llong;
    unsigned long long int x_ullong;
    std::cout << "long long int: " << sizeof(long long) * CHAR_BIT << " bits, " 
              << sizeof(long long) << " bytes, " << LLONG_MIN << " to " << LLONG_MAX 
              << " (Example: long long int x_llong;)" << std::endl;
    std::cout << "unsigned long long int: " << sizeof(unsigned long long) * CHAR_BIT 
              << " bits, " << sizeof(unsigned long long) << " bytes, " << 0 << " to " 
              << ULLONG_MAX << " (Example: unsigned long long int x_ullong;)" << std::endl;

    // float
    float x_float;
    std::cout << "float: " << FLT_MANT_DIG << " bits, " << sizeof(float) 
              << " bytes, " << FLT_MIN << " to " << FLT_MAX 
              << " (Example: float x_float;)" << std::endl;

    // bool
    bool x_bool;
    std::cout << "bool: At least " << sizeof(bool) * CHAR_BIT << " bits, " << sizeof(bool) 
              << " bytes, " << false << " to " << true 
              << " (Example: bool x_bool;)" << std::endl;

    // double
    double x_double;
    std::cout << "double: " << DBL_MANT_DIG << " bits, " << sizeof(double) 
              << " bytes, " << DBL_MIN << " to " << DBL_MAX 
              << " (Example: double x_double;)" << std::endl;

    // Increment and Decrement
    int x = INT_MAX;
    std::cout << "Increment INT_MAX: " << ++x << std::endl; // Increment INT_MAX
    x = INT_MIN;
    std::cout << "Decrement INT_MIN: " << --x << std::endl; // Decrement INT_MIN

    std::cout  << "---------------------------------------------" << std::endl;
}