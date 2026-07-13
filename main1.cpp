#include <iostream>

int main() {

    std::cout << std::boolalpha;

    std::cout << "Operation ||\n";
    std::cout << true << '\t' << true << '\t' << (true || true) << '\n';
    std::cout << true << '\t' << false << '\t' << (true || false) << '\n';
    std::cout << false << '\t' << true << '\t' << (false || true) << '\n';
    std::cout << false << '\t' << false << '\t' << (false || false) << '\n';

    std::cout << std::endl;

    std::cout << "Operation &&\n";
    std::cout << true << '\t' << true << '\t' << (true && true) << '\n';
    std::cout << true << '\t' << false << '\t' << (true && false) << '\n';
    std::cout << false << '\t' << true << '\t' << (false && true) << '\n';
    std::cout << false << '\t' << false << '\t' << (false && false) << '\n';

    return EXIT_SUCCESS;
}