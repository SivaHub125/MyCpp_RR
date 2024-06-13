#include "solution.h"

int main() {
    try {
        double input;
        std::cin>>input;
        double result = computeSquareRoot(input);
        std::cout << "Square root of " << input << " is: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}

