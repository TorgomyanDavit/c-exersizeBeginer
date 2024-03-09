#include <iostream>

#include <string.h>


void example(char *z) {
    std::cout << z <<  " === pointer" << std::endl;
}

void getCharValue() {

    // int number = 18;
    // double  remainder = 18.5;
    // float   remainder2 = 18.5;

    // singl character
    // char    character = 72;
    // character++; // character will be 73 , and it willprint I which Ascii value is 73

    // char character = 72;
    // char text[] = {'H', 'e', '\n', 'l','l', 'o', '\0'};
    // char text2[] = "Hello";
    // char *ptr = text;
    // foo(ptr);

    char quetion[] = "What is your name ?";
    std::cout << quetion << std::endl;

    char name[5];
    std::cin >> name;

    std::cout << "Your name is " << name << std::endl;
}