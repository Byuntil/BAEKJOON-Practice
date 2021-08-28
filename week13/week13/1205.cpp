#include<iostream>

using namespace std;
int main() {
	int N, newScore, P;
	int rank[100];

	cin >> N >> newScore >> P;

	for (int i = 0; i < N; i++) {
		cin >> rank[i];
	}

	int count = 0;
	int myRank = 1;
	for (int i = 0; i < N; i++) {
		if (newScore < rank[i]) {
			myRank += 1;
		}
		else if (newScore == rank[i]) {
			myRank = myRank;
		}
		else {
			break;
		}
		count++;
	}

	if (count == P) {
		myRank = -1;
	}
	if (N == 0) {
		myRank = 1;
	}
	cout << myRank;

	return 0;
}
