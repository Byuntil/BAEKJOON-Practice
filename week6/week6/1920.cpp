#include <iostream>
#include <algorithm>
using namespace std;
/*
�����ϴ� ���� ã�����ؼ� Ž���� �ؾ��ϴµ�
�������� Ž�� �˰����� ���� Ž�� �˰����� ����ؾ� �ð� �ʰ���
���ֱ� ���� ����Ž��(logn)�� ��� => �������� ���� �ʿ�
*/

int arrN[100001]; //n���� ���� �迭
int arrM[100001]; //m���� ���� �迭

bool binaryFunction(int A, int key) {
	int low = 0;
	int high = A - 1;
	int mid;

	while (low <= high) {
		mid = (low + high) / 2;

		if (arrN[mid] == key)
			return true;
		else if (arrN[mid] > key)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return false;
}

int main() {
	int N, M; //�ڿ���  N�� M

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arrN[i];
	}

	sort(arrN, arrN + N); //������(ó������(0) ~ N-1����) arrN�� �������� 

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> arrM[i];
	}

	

	for (int i = 0; i < M; i++) { //�ݺ����� ���鼭 �ش� ���ڰ� N�迭�� �ִ��� Ȯ�� ������ 1 ������ 0
		if (binaryFunction(N, arrM[i]))
			cout << "1\n";
		else
			cout << "0\n";
	}
	return 0;

}