#include<iostream>
#include <stack>
#include <string>

using namespace std;
//Ω∫≈√
int main() {
	int num;
	string st;
	stack<int> s;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> st;
		if (st == "push") {
			int n;
			cin >> n;
			s.push(n);
		}
		else if (st == "pop") {
			if (!s.empty()) {
				cout << s.top()<<endl;
				s.pop();
			}
			else {
				cout << "-1" << endl;
			}
		}
		else if (st == "size") {
			cout << s.size() << endl;
		}
		else if (st == "empty") {
			if (s.empty()) {
				cout << "1" << endl;
			}
			else {
				cout << "0" << endl;
			}
		}
		else if (st == "top") {
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
