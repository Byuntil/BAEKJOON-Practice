#include <iostream>
#include <stack>

using namespace std;
//°ýÈ£

bool check(string s) {
	stack<char> stack;

	for (int i = 0; i < s.size(); i++) {
		char ch = s[i];

		if (ch == '(') {
			stack.push(s[i]);
		}
		else {
			if (!stack.empty()) {
				stack.pop();
			}
			else {
				return false;
			}
		}
	}

	return stack.empty();
}
int main() {
	int num;

	cin >> num;
	for (int i = 0; i < num; i++) {
		string s;
		cin >> s;

		if (check(s)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}