#include <iostream>

using namespace std;
int main()
{

	int n;//�Է°�(Kų�α׷�) 
	int i = 0;//3kg������ ����
	int k = 0;//�����(�ּ� ����)
	cin >> n;
	while (true)
	{
		double a = (2 * i + n) / 5.0;
		if (a - int(a) == 0) //�����϶�
		{
			k = (2 * i + n) / 5;
			break;
		}
		else {//������ �ƴҶ� (== ���Ҽ� ������)
			k = -1;
			if (3 * i > n)
				break;
		}
		i++;
	}
	cout << k << endl;


	return 0;
}