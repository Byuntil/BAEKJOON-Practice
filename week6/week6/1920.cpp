#include <iostream>
#include <algorithm>
using namespace std;

int arrA[100001];
int arrB[100001];

bool binaryFunction(int A, int key) {
	int low = 0;
	int high = A - 1;
	int mid;

	while (low <= high) {
		mid = (low + high) / 2;

		if (arrA[mid] == key)
			return true;
		else if (arrA[mid] > key)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return false;

}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int A, B;

	cin >> A;
	for (int i = 0; i < A; i++) {
		cin >> arrA[i];
	}

	sort(arrA, arrA + A);

	cin >> B;
	for (int i = 0; i < B; i++) {
		cin >> arrB[i];
	}

	

	for (int i = 0; i < B; i++) {
		if (binaryFunction(A, arrB[i]))
			cout << "1\n";
		else
			cout << "0\n";
	}
	return 0;

}