/**
 * De tuyen sinh truong THPT Chuyen Le Hong Phong - 2017-2018
 * Bai 2: DOANPHU
**/

#include <bits/stdc++.h>

using namespace std;

const int N = 1000;
int n;
int a[N];
int b[N];
int countPasses[N];

int main() {
    ios_base::sync_with_stdio(false);

    cin >> n;
    assert(1 <= n && n <= 1000);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        assert(0 <= a[i] && a[i] <= 1000);
        assert(0 <= b[i] && b[i] <= 1000);
        if (a[i] > b[i]) swap(a[i], b[i]);
    }

    for (int i = 0; i < N; i++) {
        countPasses[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = a[i]; j < b[i]; j++) {
            countPasses[j]++;
        }
    }

    int maxPasses = -1;
    int countMax = 0;

    for (int i = 0; i < N; i++) {
        if (countPasses[i] > maxPasses) {
            maxPasses = countPasses[i];
            countMax = 1;
        }
        else if (countPasses[i] == maxPasses) {
            countMax++;
        }
    }

    cout << countMax << '\n';

    return 0;
}
