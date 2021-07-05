// 10871. X보다 작은 수
#include <iostream>
using namespace std;

int main() {
	int n, x, a;

	do {
		cin >> n;
	} while (n < 1 || n > 10000);

	cin >> x;

	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (a < x)
			cout << a << " ";
	}

	return 0;
}