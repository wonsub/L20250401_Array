#include <iostream>

using namespace std;

int main()
{
	float Range = 9.3f;
	float AttackRange = 1.5f;

	bool Seeing = true;
	bool Attack = false;


	//FSM, Behavior Tree -> 기획자

	if (Range)
	{
		if (Attack)
		{
			cout << "공격한다." << endl;

		}
		else
		{
			cout << "쫒아간다" << endl;
		}
	}

	else 
	{
		cout << "못찾음" << endl;
	}

	return 0;

}