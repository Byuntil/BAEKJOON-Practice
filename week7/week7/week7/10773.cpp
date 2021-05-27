#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> v;
	int num = 0;
	int result = 0;

	cin >> num;
	for (int i = 0; i < num; i++) {
		int n;
		cin >> n;
		if (n == 0) {
			v.pop_back();
		}
		else {
			v.push_back(n);
		}
	}

	for (int i = 0; i < v.size(); i++) {
		result += v[i];
	}
	cout << result << "\n";
	return 0;
}