// 2753. 윤년
#include <iostream>
using namespace std;

int main() {
	int y;

	do {
		cin >> y;
	} while (y < 1 || y > 4000);

	if (y % 4 == 0) {
		if (y % 400 == 0) {
			cout << 1;
			return 0;
		}
		else if (y % 100 == 0) {
			cout << 0;
			return 0;
		}

		cout << 1;

	}
	else {
		cout << 0;
	}

	return 0;
}