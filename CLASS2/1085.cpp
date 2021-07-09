// 1085. 직사각형에서 탈출
#include <iostream>
using namespace std;

int main() {
	int x, y, w, h;
	int minDis = 1000;
	do {
		cin >> x >> y >> w >> h;
	} while (x > w - 1 || y > h - 1);

	if (x < minDis)
		minDis = x;
	if (y < minDis)
		minDis = y;
	if (w - x < minDis)
		minDis = w - x;
	if (h - y < minDis)
		minDis = h - y;

	cout << minDis;

	return 0;
}