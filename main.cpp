#include <iostream>

using namespace std;

int main()
{

	int Goblins[4] = { 1,2,3,4 };
	float MP[10] = { 0, };
	char Diamonds[10] = { 0, };
	bool Condition = 3 != 3;



	for (int i = 0; i < 4; i++)
	{
		Goblins[i] = i;
		cout << Goblins[i] << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		MP[i] = i;
		cout << MP[i] << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		Diamonds[i] = i;
		cout << Diamonds[i] << endl;
	}

	return 0;

}