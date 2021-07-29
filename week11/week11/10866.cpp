#include <iostream>
#include <deque>
using namespace std;

int main() {
	cin.tie(0), cin.sync_with_stdio(0);
	deque<int> dq;
	int N;
	string co;
	cin >> N;

	int i = 0;
	while (i++ < N) {
		cin >> co;
		if (co == "push_back") {
			int n;
			cin >> n;
			dq.push_back(n);
		}
		else if (co == "push_front") {
			int n;
			cin >> n;
			dq.push_front(n);
		}
		else if (co == "pop_front") {
			if (!dq.empty()) {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
			else {
				cout << "-1\n";
			}
		}
		else if (co == "pop_back") {
			if (!dq.empty()) {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
			else {
				cout << "-1\n";
			}
		}
		else if (co == "front") {
			if (!dq.empty()) {
				cout << dq.front() << "\n";
			}
			else {
				cout << "-1\n";
			}
		}
		else if (co == "back") {
			if (!dq.empty()) {
				cout << dq.back() << "\n";
			}
			else {
				cout << "-1\n";
			}
		}
		else if (co == "size") {
			cout << dq.size() << "\n";
		}
		else {
			if (dq.empty()) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
	}
	return 0;
}
	