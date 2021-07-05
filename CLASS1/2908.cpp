// 2908. 상수
#include <iostream>
using namespace std;

int main() {
	char num1[4] = { 0, };
	char num2[4] = { 0, };
	char tmp;
	do {
		cin >> num1;
	} while (num1[0] > '9' || num1[0] < '0' || num1[1] > '9' || num1[1] < '0' || num1[2] > '9' || num1[2] < '0');

	do {
		cin >> num2;
	} while (num2[0] > '9' || num2[0] < '0' || num2[1] > '9' || num2[1] < '0' || num2[2] > '9' || num2[2] < '0');

	tmp = num1[0];
	num1[0] = num1[2];
	num1[2] = tmp;

	tmp = num2[0];
	num2[0] = num2[2];
	num2[2] = tmp;

	if (num1[0] > num2[0]) {
		cout << num1;
	}
	else if (num1[0] < num2[0]) {
		cout << num2;
	}
	else {
		if (num1[1] > num2[1]) {
			cout << num1;
		}
		else if (num1[1] < num2[1]) {
			cout << num2;
		}
		else {
			if (num1[2] > num2[2]) {
				cout << num1;
			}
			else if (num1[2] < num2[2]) {
				cout << num2;
			}
			else {
				cout << num1;
			}
		}
	}

	return 0;
	
}