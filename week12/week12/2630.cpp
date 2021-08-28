#include<iostream>

using namespace std;

int arr[129][129];
int bPaper = 0, wPaper = 0;

void findPaper(int x, int y, int N) {
	bool isCheck = false;
	int q = arr[x][y];

	for (int i = x; i < x + N; i++) {
		for (int j = y; j < y + N; j++) {
			if (q == arr[i][j]) {
				isCheck = true;
				q = arr[i][j];
			}
			else {
				isCheck = false;
				break;
			}
		}
		break;
	}
	if (isCheck) {
		if (q == 1) {
			bPaper++;
		}
		else if (q == 0) {
			wPaper++;
		}
	}
	else {
		findPaper(x, y, N / 2);
		findPaper(x, y + N / 2, N / 2);
		findPaper(x + N / 2, y, N / 2);
		findPaper(x + N / 2, y + N / 2, N / 2);
	}
}

int main() {
	int N=0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >>	arr[i][j];
		}
	}
	findPaper(0, 0, N);
	cout << wPaper << "\n";
	cout << bPaper << "\n";

	return 0;
}