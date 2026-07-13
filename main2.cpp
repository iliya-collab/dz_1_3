#include <iostream>

#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) < (b)) ? (a) : (b))

int main() {

    int a, b, c;

    std::cout << "Enter the first number: ";
    std::cin >> a;

    std::cout << "Enter the second number: ";
    std::cin >> b;

    std::cout << "Enter the third number: ";
    std::cin >> c;

    std::cout << "Result: " << max(a, max(b, c)) << ' '
                            << min(a, max(b, c)) << ' ' 
                            << min(a, min(b, c)) << std::endl;

    return EXIT_SUCCESS;
}