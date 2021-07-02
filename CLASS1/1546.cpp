// 1546. 평균
#include <iostream>
using namespace std;

#define MAX_N 1000

int main() {
	int score[MAX_N] = { 0, };
	float newScore[MAX_N] = { 0, };
	int N = 0;
	int M = 0;
	int checkAllZero = 0;
	float sum = 0;

	cin >> N;

	for (int i = 0; i < N; ++i) {
		do {
			cin >> score[i];
		} while (score[i] < 0 || score[i] > 100);
		if (score[i] > M)
			M = score[i];
	}

	for (int i = 0; i < N; ++i) {
		if (score[i] == 0)
			checkAllZero++;
	}

	if (checkAllZero == N) {
		printf("Error occured!");
		return 0;
	}

	for (int i = 0; i < N; ++i) {
		newScore[i] = (float)score[i] / (float)M * 100;
		sum += newScore[i];
	}

	cout << sum / (float)N;

	return 0;
}