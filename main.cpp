#include <iostream>

using namespace std;

int main()
{
	//1���� 100���� ¦���� ���� ���϶� (For �Լ��� �̿�)
	int Total = 0;

	for(int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			Total += i;
		}

		cout << Total << endl;
	}
	return 0;
}
