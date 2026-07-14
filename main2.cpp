#include <iostream>
#include <vector>

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

    int mn = min(a, min(b, c));
    int mx = max(a, max(b, c));
    int sm = a + b + c;
    int mid = sm - mn - mx;

    std::cout << "Result: " << mx << ' '
                            << mid << ' ' 
                            << mn << std::endl;

    return EXIT_SUCCESS;
}