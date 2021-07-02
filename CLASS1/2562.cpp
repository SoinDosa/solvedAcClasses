// 2562. 최댓값
#include <iostream>
using namespace std;

int main() {
	int arr[9] = { 0, };
	int max = 0, index = 0;

	for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
		do {
			cin >> arr[i];
		} while (arr[i] < 0 || arr[i] > 100);
	}

	for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
		if (arr[i] > max) {
			max = arr[i];
			index = i;
		}
	}

	cout << max << endl << index + 1;

	return 0;
}