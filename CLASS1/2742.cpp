// 2742. 기찍 N
#include <iostream>
using namespace std;

int main() {
	int n;

	do {
		cin >> n;
	} while (n < 1 || n > 100000);

	for (int i = n; i >= 1; --i) {
		cout << i << '\n'; // endl 하면 시간초과
	}

	return 0;
}