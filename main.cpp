#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < (n - i); k++) {
            std::cout << " ";
        }
        for (int j = 0; j < (i * 2 + 1); j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}