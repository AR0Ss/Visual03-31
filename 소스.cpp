#include <iostream>

using namespace std;

class Hammubarankana
{
public:
	string Food[3] = {"GukBBap","GGakDuGi","DanMuJi"};




private:

};

int main()
{
	//1���� 100���� ¦���� ���� ���϶� (For �Լ��� �̿�)
	/*int Total = 0;
		
	for(int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			Total += i;
		}

		cout << Total << endl;
	}*/

	//unmanaged languege, C, C++
	/*for (;;)
	{
		int* p = new int;
		delete p;
	}*/
	
	//2���� �迭
	int Map[10][10] = {
		{1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1},
	};

	while (true)
	{
		int PlayerY = 1;
		int PlayerX = 1;

		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
			{
				if (PlayerX == X && PlayerY == Y)
				{
					cout << 'P';
				}
				else if (Map[Y][X] == 1)
				{
					cout << "#";
				}
				else if (Map[Y][X] == 0)
				{
					cout << ' ';
				}	
			}
			cout << endl;
		}
		system("cls");
	}
		
	return 0;
}
