#include <iostream>

int main() {
    int n = 9; // Number of rows

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            std::cout << "# ";
        }
        std::cout << std::endl;
    }

    return 0;
}
