#include<iostream>
#include <string>

//팰린드롬스
using namespace std;
int main() {
	string s;
	while (true)
	{
		cin >> s;
		bool b = true; // 팰린드롬스 이면 yes(true) OR 팰린드롬수가 아니면No(false)
		if (s == "0") {
			break;
		}
		
		for (int i = 0; i < (s.size()/2); i++) {
			if (s[i] != s[s.size() - i - 1]) {
				b = false;
				break;
			}
		}

		if (b) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	return 0;
}