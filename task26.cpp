#include <iostream>


int main() {
    int numbers[5];

    std::cout << "mutqagreq 5 hat tiv " << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cin >> numbers[i];
    }
    for (int n = 0; n < 5; n++) {
        std::cout << numbers[n] << "  ";
    }

    return 0;
}
