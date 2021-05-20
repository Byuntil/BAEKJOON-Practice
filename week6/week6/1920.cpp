#include <iostream>
#include <algorithm>
using namespace std;
/*
존재하는 가를 찾기위해서 탐색을 해야하는데
여러가지 탐색 알고리즘중 이진 탐색 알고리즘을 사용해야 시간 초과를
없애기 위해 이진탐색(logn)을 사용 => 오름차순 정렬 필요
*/

int arrN[100001]; //n개의 정수 배열
int arrM[100001]; //m개의 정수 배열

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
	int N, M; //자연수  N가 M

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arrN[i];
	}

	sort(arrN, arrN + N); //퀵정렬(처음부터(0) ~ N-1까지) arrN을 오름차순 

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> arrM[i];
	}

	

	for (int i = 0; i < M; i++) { //반복문을 돌면서 해당 숫자가 N배열에 있는지 확인 있으면 1 없으면 0
		if (binaryFunction(N, arrM[i]))
			cout << "1\n";
		else
			cout << "0\n";
	}
	return 0;

}