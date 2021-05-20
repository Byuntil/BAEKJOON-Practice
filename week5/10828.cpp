#include<iostream>
#include <stack>
#include <string>

using namespace std;
//스택
int main() {
	int num;
	string st;
	stack<int> s;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> st;
		if (st == "push") { //정수 입력받아서 push
			int n;
			cin >> n;
			s.push(n);
		}
		else if (st == "pop") {
			//비어있으면 -1 아니면 제일 위에 정수 출력하고 젤 위에 있는 정수 지움
			if (!s.empty()) {
				cout << s.top()<<endl;
				s.pop();
			}
			else {
				cout << "-1" << endl;
			}
		}
		else if (st == "size") { //스택의 정수 개수 출력
			cout << s.size() << endl;
		}
		else if (st == "empty") {// 비어있으면 1 아니면 0
			if (s.empty()) {
				cout << "1" << endl;
			}
			else {
				cout << "0" << endl;
			}
		}
		else if (st == "top") {// 비어있으면 -1 아니면 제일 위에꺼 출력
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
