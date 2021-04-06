#include <iostream>

using namespace std;

int main() {
	char b[101];
	cin >> b;

	int count = 0;
	for(int i=0;;i++)
	{
		char c = b[i];
		if (b[i] == NULL)
		{
			break;
		}

		if (c == 'n' || c == 'l') {
			if (b[i + 1] == 'j'){
				continue;
			}
		}
		else if (c == 'd' || c == 'c') {
			if (b[i + 1] == '=' || b[i + 1] == '-') {
				continue;
			}
		}
		else if (c == 's' || c == 'z') {
			if (b[i + 1] == '=') {
				continue;
			}
		}
		count++;
	}
	std::cout << count;
}