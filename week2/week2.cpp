#include <iostream>

using namespace std;
int main() {
	int N; //N장의 카드
	int M; //딜러의 외침
	int sum = 0, result = 0;
	int arr[100] = { 0 };

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		int a = 0;
		cin >> a;
		arr[i] = a;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				if (sum > result && sum <= M)
				{
					result = sum;
				}
			}
		}
	}

	cout << result;

	return 0;
}