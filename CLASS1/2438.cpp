// 2438. 별 찍기 - 1
#include <iostream>
using namespace std;

int main() {
	int n;

	do {
		cin >> n;
	} while (n < 1 || n > 100);

	for (int i = 0; i < n; ++i) {
		for (int j = i; j >= 0; --j) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}