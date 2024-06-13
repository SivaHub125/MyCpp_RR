// Write your solution here
#include <iostream>
#include <cmath> // for sqrt

double computeSquareRoot(double num) {
    if (num < 0) {
        throw std::domain_error("Negative input is not allowed.");
    }
    return std::sqrt(num);
}