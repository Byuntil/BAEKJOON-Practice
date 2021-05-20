#include <iostream>
#include <stack>

using namespace std;
//괄호

bool check(string s) {
	stack<char> stack;

	for (int i = 0; i < s.size(); i++) {
		char ch = s[i]; //string을 char에 하나씩 할당

		if (ch == '(') {//'('이면 stack에 push
			stack.push(s[i]);
		}
		else { // ')'이면
			if (!stack.empty()) { 
				//스택에 여는 괄호가 없으면 false반환 아니면 젤 위에꺼 지움
				stack.pop();
			}
			else {
				return false;
			}
		}
	}
	return stack.empty(); //다 확인후 비었으면 true반환 여는 괄호가 남아있다면 false
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