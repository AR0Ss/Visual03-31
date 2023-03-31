#include <iostream>
#include <h>
using namespace std;

class Hammubarankana
{
public:
	string Food[3] = {"GukBBap","GGakDuGi","DanMuJi"};




private:

};

int main()
{
	//1부터 100까지 짝수의 합을 구하라 (For 함수를 이용)
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
	
	//2차원 배열
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

	int PlayerY = 1;
	int PlayerX = 1;
	bool blsRunning = true;

	while (true) //GameLoop
	{
		
		//Frame
		
		//Input();
		char Key;
		Key = _getch();

		//Tick();
		if (Key == 'd')
		{
			PlayerX++;
		}
		else if (Key == 'a')
		{
			PlayerX--;
		}
		else if (Key == 'w')
		{
			PlayerY--;
		}
		else if (Key == 's')
		{
			PlayerY++;
		}
		else if (Key == 'q')
		{
			blsRunning = false;
		}
		//Render();
		system("cls");

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
		
	}
		
	return 0;
}
