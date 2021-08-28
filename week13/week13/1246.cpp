#include<iostream>
#include<vector>

using namespace std;
int main() {
	int N, M;
	vector<int> p;
	vector<int> e;

	for (int i = 0; i < M; i++) {
		int j = 0;
		cin >> j;
		p.push_back(j);
	}

	for (int i = 0; i < M; i++) {
		int count = 0;
		for (int j = 0; j < M; j++) {
			if (p[i] <= p[j])
				count++;
		}
		if (count > N)
			count = N;
		e.push_back(p[i] * count);
	}

	int n = 0;
	int max = e[0];
	for (int i = 0; i < M; i++) {
		if (max < e[i]) {
			max = e[i];
			n = p[i];
		}
	}
	cout << n << " " << max;
	return 0;
}