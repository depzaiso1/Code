#include <iostream>

int main() {
    int i{}, k{}, x{3};
    std::cin >> k;

    while (i < k) {
        while ((x % 3) != 0 && (x % 5) != 0 && (x % 7) != 0) x++;
        if (++i < k) x++;
    }
    std::cout << x;
    return 0;
}