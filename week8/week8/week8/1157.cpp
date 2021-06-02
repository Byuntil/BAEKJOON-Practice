#include <iostream>

using namespace std;
int main() {

	int app[26] = { 0 };
	string q = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string s;
	int max = 0;
	int location ;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		s[i] = toupper(s[i]);
		app[s[i]-65]++;
	}

	for (int i = 0; i < 26; i++) {
		if (max < app[i]) {
			max = app[i];
			location = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (location != i) {
			if (max == app[i]) {
				cout << "?";
				return 0;
			}
		}
	}

	cout << q[location];
	return 0;
}