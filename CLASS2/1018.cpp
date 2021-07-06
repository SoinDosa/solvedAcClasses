// 1018. 체스판 다시 칠하기
#include <iostream>
#include <algorithm>
using namespace std;

string WB[8]{
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};
string BW[8]{
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};

string board[50];

int WBCount(int x, int y) {
	int count = 0;
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			if (board[x + i][y + j] != WB[i][j])
				count++;
		}
	}
	return count;
}

int BWCount(int x, int y) {
	int count = 0;
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			if (board[x + i][y + j] != BW[i][j])
				count++;
		}
	}
	return count;
}

int main() {
	int size[2];
	int count;
	int min_val = 100000;
	pair<int, int> p1;

	cin >> p1.first >> p1.second;

	for (int i = 0; i < p1.first; ++i) {
		cin >> board[i];
	}

	for (int i = 0; i + 8 <= p1.first; ++i) {
		for (int j = 0; j + 8 <= p1.second; ++j) {
			int tmp;
			tmp = min(WBCount(i, j), BWCount(i, j));

			if (tmp < min_val)
				min_val = tmp;
		}
	}

	cout << min_val;

	return 0;
}