#include<iostream>
#include<queue>

using namespace std;

int main() {
	int N;
	queue<int> q;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	int i = 1;
	while(q.size()>1) {
		if (i % 2 == 0) { //¦���� ��
			int j = q.front();
			q.pop();
			q.push(j);
		}
		else { //Ȧ���� ��
			q.pop();
		}
		i++;
	}
	cout << q.front();

	return 0;
}