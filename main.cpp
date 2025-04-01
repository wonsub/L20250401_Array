#include <iostream>
#include <conio.h >

using namespace std;

int main()
{
	int PlayerX = 1;
	int PlayerY = 1;

	
	int map[10][10] = 
	{
		{ 1,1,1,1,1,1,1,1,1,1 },
		{ 1,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,1 },
		{ 1,1,1,1,1,1,1,1,1,1 }
	};



	//PlayerX++;
	//for (int y = 0; y < 10; y++)
	//{
	//		
	//	PlayerX++;
	//	for (int x = 0; x < 10; x++)
	//	{
	//			
	//		{
	//			cout << map[y][x];
	//		}
	//	}
	//	cout << endl;
	//}


	
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i <= j; i++)
		{

			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	for (int j = 5; j > 0; j--)
	{
		for (int i = 0; i < j; i++)
		{

			cout << "*";
		}
		cout << endl;
	}


	
	




	return 0;

}