#include<iostream>
using namespace std;

int main() {
	int n=0;
	
	cin >> n;
	string s;
	
	cin >> s;
	for (int i = 0; i < n-1; i++) {
		string s2;
		cin >> s2;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] !='?' && s[i] != s2[i]) {
				s[i] = '?';
			}
		}
	}
	cout << s;
	return 0;
}