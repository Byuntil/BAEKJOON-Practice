#include<iostream>
#include<queue>

using namespace std;
int main() {
	int N, K;
	int t=0;
	queue<int> q;

	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	cout << "<";
	while (true) {
		for (int i = 0; i < K - 1; ++i) {
			t = q.front();
			q.pop();
			q.push(t);
		}
		cout << q.front();
		q.pop();
		if (!q.size()) {
			break;
		}
		cout << ", ";
	}
	cout << ">";

	return 0;
}