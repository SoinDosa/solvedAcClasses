// 2741. N 찍기
#include <iostream>
using namespace std;

int main() {
	int n;

	do {
		cin >> n;
	} while (n < 1 || n > 100000);

	for (int i = 1; i <= n; ++i) {
		cout << i << '\n'; // endl 하면 시간초과
	}

	return 0;
}