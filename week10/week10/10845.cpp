#include <iostream>
#include <queue>
//ť1
using namespace std;
int main() {
	cin.tie(0), cin.sync_with_stdio(0);
	queue<int> q;
	string s;
	int N,x;
	cin >> N;

	
	for (int i = 0; i < N; i++) {
		cin >> s;
		if (s == "push") {
			cin >> x;
			q.push(x);
		}
		else if (s == "pop") {
			if (q.empty()) {
				cout << "-1\n";
			}
			else {
				cout << q.front() << "\n";
				q.pop();
			}

		}
		else if (s == "size") {
			cout << q.size() << "\n";
		}
		else if (s == "empty") {
			if (q.empty()) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
		else if(s =="front") {
			if (!q.empty()) {
				cout << q.front() << "\n";
			}
			else {
				cout << "-1\n";
			}
			
		}
		else if(s =="back") {
			if (!q.empty()) {
				cout << q.back() << "\n";
			}
			else {
				cout << "-1\n";
			}
		}
		
	}

	return 0;
}