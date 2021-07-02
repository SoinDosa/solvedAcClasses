// 2475. 검증수
#include <iostream>
using namespace std;

int main() {
	int arr[5] = { 0, };
	int sum = 0;

	for (int i = 0; i < sizeof(arr)/sizeof(int); ++i) {
		do {
			cin >> arr[i];
		} while (arr[i] < 0 || arr[i] > 9);
	}

	for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
		sum += (arr[i] * arr[i]);
	}

	cout << sum % 10;
}