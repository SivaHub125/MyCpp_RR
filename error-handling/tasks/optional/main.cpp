#include "solution.h"
#include<iostream>
int main() {
    std::string input = "123"; // Replace with your input string
    auto result = parseInteger(input);
    
    if (result) {
        std::cout << "Parsed integer: " << *result << std::endl;
    } else {
        std::cout << "Failed to parse integer." << std::endl;
    }

    return 0;
}

