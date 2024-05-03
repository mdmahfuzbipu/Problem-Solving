#include <iostream>
#include <string>

void printCheckerboard(int n) {
    int size = 1 << n;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if ((row + col) % 2 == 0) {
                std::cout << "#";
            } else {
                std::cout << ".";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;

        printCheckerboard(n);

        if (i < t - 1) {
            std::cout << std::endl;
        }
    }

    return 0;
}