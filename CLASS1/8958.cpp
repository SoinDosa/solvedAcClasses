// 8958. OX퀴즈
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char result[80];
	int n, score, sum;

	cin >> n;
	
	for (int i = 0; i < n; ++i) {
		score = 0;
		sum = 0;
		cin >> result;

		for (int j = 0; j < strlen(result); ++j) {
			if (result[j] == 'O')
				score++;
			else if (result[j] == 'X')
				score = 0;
			else
				cout << "Error occured";

			sum += score;
		}
		cout << sum << '\n';
	}
	
	return 0;
}