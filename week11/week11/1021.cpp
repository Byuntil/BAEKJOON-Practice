#include <iostream>
#include <deque>
using namespace std;

int main() {
	cin.tie(0), cin.sync_with_stdio(0);

	deque<int> dq;
	int N, M, num;
	int index;
	int count = 0;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}
	while (M--)
	{
		cin >> num;
		for (int i = 0; i < dq.size(); i++) {
			if (dq[i] == num) {
				index = i;
				break;
			}
		}

		if (index < dq.size() - index) { //왼쪽부터 가까운 경우
			while (true)
			{
				if (dq.front() == num) {
					dq.pop_front();
					break;
				}
				++count;
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else {
			while (true)
			{
				if (dq.front() == num) {
					dq.pop_front();
					break;
				}
				++count;
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
	cout << count;
	return 0;
}
