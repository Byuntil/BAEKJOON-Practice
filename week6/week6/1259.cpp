#include<iostream>
#include <string>

//ÆÓ¸°µå·Ò½º
using namespace std;
int main() {
	string s;
	while (true)
	{
		cin >> s;
		bool b = true;
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