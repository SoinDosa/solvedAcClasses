// 2920. 음계
#include <iostream>
using namespace std;

int main() {
	int arr[8];
	int asc = 0, des = 0;

	for (int i = 0; i < 8; ++i) {
		do {
			cin >> arr[i];
		} while (arr[i] < 1 || arr[i] > 8);

		if (arr[i] == i + 1)
			asc++;
		else if (arr[i] == 8 - i)
			des++;
	}

	if (asc == 8)
		cout << "ascending";
	else if (des == 8)
		cout << "descending";
	else
		cout << "mixed";

	return 0;
}