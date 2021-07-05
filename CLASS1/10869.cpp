// 10869. 사칙연산
#include <iostream>
using namespace std;

int main() {
	int a, b;
	do {
		cin >> a;
	} while (a < 1 || a > 10000);
	do {
		cin >> b;
	} while (b < 1 || b > 10000);

	cout << a + b << '\n' << a - b << '\n' << a * b << '\n' << a / b << '\n' << a % b;

	return 0;
}