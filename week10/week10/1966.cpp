#include<iostream>
#include<queue>
using namespace std;

int main() {
	int c = 0;
	int t;
	cin >> t;
	int n, m, imp;

	
	for (int i = 0; i < t; i++) {
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		cin >> n >> m;
		for (int j = 0; j < n; j++) {
			cin >> imp;
			q.push({ j,imp });
			pq.push(imp);
		}
		while (!q.empty()) {
			int id = q.front().first;//처음 값
			int val = q.front().second;//나중 값
			q.pop();
			if (pq.top() == val) {
				pq.pop();
				c++;
				if (id == m) {
					cout << c << "\n";
					break;
				}
			}
			else {
				q.push({ id,val });
			}
		}
	}
	return 0;
}