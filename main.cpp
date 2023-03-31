#include <iostream>

using namespace std;

int main()
{
	//1부터 100까지 짝수의 합을 구하라 (For 함수를 이용)
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
