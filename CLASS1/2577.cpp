// 2577. 숫자의 개수
#include <iostream>
#include <string>
using namespace std;

int main() {
	int arr[3] = { 0, };
	int result = 1;
	int countNum[10] = { 0, };
	string num = "0123456789";
	string resultToStr;

	for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
		cin >> arr[i];
		result *= arr[i];
	}

	resultToStr = to_string(result);

	for (int i = 0; i < resultToStr.length(); ++i) {
		countNum[num.find(resultToStr[i])]++;
	}

	for (int i = 0; i < sizeof(countNum) / sizeof(int); ++i) {
		cout << countNum[i] << endl;
	}
	return 0;
}