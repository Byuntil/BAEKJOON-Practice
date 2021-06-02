#include<iostream>

using namespace std;
int main() {
	int V, A, B;
	cin >> A >> B >> V;
	
	int date = (V - B) / (A - B);

	if ((V - B) % (A - B) != 0) {
		date++;
	}
	cout << date;
	return 0;
}