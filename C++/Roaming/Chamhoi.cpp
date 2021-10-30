#include<iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	cout << a << ((a >= 10 && a <= 100) ? "is in the range[10, 100]" : " is not in the range [10, 100]");
	return 0;
}