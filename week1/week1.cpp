#include <iostream>

using namespace std;
int main()
{

	int n;//입력값(K킬로그램) 
	int i = 0;//3kg봉지의 개수
	int k = 0;//결과값(최소 봉지)
	cin >> n;
	while (true)
	{
		double a = (2 * i + n) / 5.0;
		if (a - int(a) == 0) //정수일때
		{
			k = (2 * i + n) / 5;
			break;
		}
		else {//정수가 아닐때 (== 구할수 없을때)
			k = -1;
			if (3 * i > n)
				break;
		}
		i++;
	}
	cout << k << endl;


	return 0;
}