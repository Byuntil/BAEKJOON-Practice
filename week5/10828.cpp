#include<iostream>
#include <stack>
#include <string>

using namespace std;
//����
int main() {
	int num;
	string st;
	stack<int> s;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> st;
		if (st == "push") { //���� �Է¹޾Ƽ� push
			int n;
			cin >> n;
			s.push(n);
		}
		else if (st == "pop") {
			//��������� -1 �ƴϸ� ���� ���� ���� ����ϰ� �� ���� �ִ� ���� ����
			if (!s.empty()) {
				cout << s.top()<<endl;
				s.pop();
			}
			else {
				cout << "-1" << endl;
			}
		}
		else if (st == "size") { //������ ���� ���� ���
			cout << s.size() << endl;
		}
		else if (st == "empty") {// ��������� 1 �ƴϸ� 0
			if (s.empty()) {
				cout << "1" << endl;
			}
			else {
				cout << "0" << endl;
			}
		}
		else if (st == "top") {// ��������� -1 �ƴϸ� ���� ������ ���
			if (!s.empty()) {
				cout<<s.top()<<endl;
			}
			else {
				cout << "-1" << endl;
			}
	
		}
		
	}
	return 0;
}
