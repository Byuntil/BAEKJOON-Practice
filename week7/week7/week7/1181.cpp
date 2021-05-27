#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
bool compare(string a, string b) {
	if (a.size() == b.size()) {
		return a < b;
	}
	else {
		return a.size() < b.size();
	}
}
int main() {
	int num;
	string temp;
	vector<string> s;
	cin >> num;
	for (int i = 0; i < num; i++) {
		string st;
		cin >> st;
		s.push_back(st);
	}
	sort(s.begin(),s.end(),compare);
	
	for (int i = 0; i < num; i++)
	{
		if (temp == s[i]) {
			continue;
		}
		else {
			cout << s[i] << "\n";
			temp = s[i];
		}
			
		
	}
		return 0;
}