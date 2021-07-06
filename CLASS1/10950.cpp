// 10950. A+B - 3
#include <iostream>
using namespace std;

int main() {
	int t, a, b;

	cin >> t;

	for (int i = 0; i < t; ++i) {
		do {
			cin >> a;
		} while (a < 1 || a > 10);
		do {
			cin >> b;
		} while (b < 1 || b > 10);

		cout << a + b << '\n';
	}

	return 0;
}