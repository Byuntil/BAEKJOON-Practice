#include <iostream>

using namespace std;
int main() {
	int N; //N���� ī��
	int M; //������ ��ħ
	int sum = 0; //�� ���� ��
	int result = 0; //�ִ밪
	int arr[100] = { 0 };

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
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