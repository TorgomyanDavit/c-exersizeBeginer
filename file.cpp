#include <iostream>
#include <string.h>
#include <fstream> // Required for file handling


void FilePattern() {
    // std::ofstream outFile("example.txt");

    // if (!outFile) {
    //     std::cerr << "Error: Unable to open file for writing!" << std::endl;
    // }

    // // Write to the file
    // outFile << "Hello, world!\n";
    // outFile << "This is a line written to the file.\n";

    // std::cout << "Data has been written to the file successfully." << std::endl;



    /** Read file from example.txt*/
    std::ifstream inputFile("example.txt"); 

    if (!inputFile.is_open()) { // Check if the file opened successfully
        std::cerr << "Error opening file." << std::endl;
    }

    std::string line;
    while (std::getline(inputFile, line)) { // Read file line by line
        std::cout << line << std::endl; // Output each line
    }
}