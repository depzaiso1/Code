#include <iostream>
#include <set>

bool isOut(const int& m, const int& n, const int& i, const int& j) {
    return i >= 0 && i < m && j >= 0 && j < n;
}

int main() {
    int m{}, n{}, k{};
    std::cin >> m >> n >> k;

    int** a = new int*[m];
    for (int i = 0; i < m; i++) a[i] = new int[n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> a[i][j];
        }
    }

    std::set<int> c;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int total{};
            if (isOut(m, n, i - 1, j - 1)) total += a[i - 1][j - 1];
            if (isOut(m, n, i - 1, j)) total += a[i - 1][j];
            if (isOut(m, n, i - 1, j + 1)) total += a[i - 1][j + 1];
            if (isOut(m, n, i, j - 1)) total += a[i][j - 1];
            if (isOut(m, n, i, j + 1)) total += a[i][j + 1];
            if (isOut(m, n, i + 1, j - 1)) total += a[i + 1][j - 1];
            if (isOut(m, n, i + 1, j)) total += a[i + 1][j];
            if (isOut(m, n, i + 1, j + 1)) total += a[i + 1][j + 1];
            c.insert(total);
        }
    }

    for (int i = 0; i < k; i++) {
        int x{};
        std::cin >> x;

        if (c.find(x) != c.end()) std::cout << '1' << ' ';
        else std::cout << '0' << ' ';
    }
    return 0;
}