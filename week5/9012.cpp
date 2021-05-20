#include <iostream>
#include <stack>

using namespace std;
//��ȣ

bool check(string s) {
	stack<char> stack;

	for (int i = 0; i < s.size(); i++) {
		char ch = s[i]; //string�� char�� �ϳ��� �Ҵ�

		if (ch == '(') {//'('�̸� stack�� push
			stack.push(s[i]);
		}
		else { // ')'�̸�
			if (!stack.empty()) { 
				//���ÿ� ���� ��ȣ�� ������ false��ȯ �ƴϸ� �� ������ ����
				stack.pop();
			}
			else {
				return false;
			}
		}
	}
	return stack.empty(); //�� Ȯ���� ������� true��ȯ ���� ��ȣ�� �����ִٸ� false
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