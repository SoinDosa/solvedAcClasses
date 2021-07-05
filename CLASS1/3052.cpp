// 3052. 나머지
#include <iostream>
using namespace std;

int main() {
	int arr[10] = { 0, };
	int remain[42] = { 0, };
	int remainCount = 0;

	for (int i = 0; i < 10; ++i) {
		do {
			cin >> arr[i];
		} while (arr[i] < 0 || arr[i] > 1000);

		remain[arr[i] % 42]++;
	}

	for (int i = 0; i < 42; ++i) {
		if (remain[i] != 0)
			remainCount++;
	}

	cout << remainCount;

	return 0;
}