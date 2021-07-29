#include<iostream>

using namespace std;
int main() {
	int N;
	int rank = 1;
	int x[50]{0}, y[50]{0};
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x[i] >> y[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (x[i] < x[j] && y[i] < y[j]) {
				rank++;
			}
		}
		cout << rank<<" ";
		rank = 1;
	}
	return 0;
}