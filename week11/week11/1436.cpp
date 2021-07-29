#include<iostream>
#include<string>
using namespace std;

int main() {
	int N;
	int count = 0;
	int i = 665;
	string s;
	cin >> N;
	while (++i) {
		s = to_string(i);

		if (s.find("666") != -1) {
			++count;
		}

		if (count == N) {
			cout << i << "\n";
			break;
		}
	}

	return 0;
}