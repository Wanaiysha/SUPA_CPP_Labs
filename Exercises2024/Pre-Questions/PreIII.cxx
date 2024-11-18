// Wan Aishah Wan Harun
// Preliminary Questions

#include <iostream>
#include <cmath> // Use cmath instead of math.h for C++

// Function declaration
double resultantVector(double x, double y);

int main() {
    double y;
    double x;
    double mgntude;

    std::cout << "Now enter X and Y for the Vector Summation " << std::endl;

    // Corrected input statements
    std::cin >> x;
    std::cin >> y;

    std::cout << "X, Y entered = " << x << ", " << y << std::endl;

    // Calculate magnitude
    mgntude = resultantVector(x, y);

    // Output result
    std::cout << "Answer = " << mgntude << std::endl;

    return 0;
}

// Function definition
double resultantVector(double x, double y) {
    return sqrt((x * x) + (y * y));
}
