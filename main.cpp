#include <iostream>

using namespace std;

int main()
{
	float Range = 9.3f;
	float AttackRange = 1.5f;

	bool Seeing = true;
	bool Attack = false;


	//FSM, Behavior Tree -> ��ȹ��

	if (Range)
	{
		if (Attack)
		{
			cout << "�����Ѵ�." << endl;

		}
		else
		{
			cout << "�i�ư���" << endl;
		}
	}

	else 
	{
		cout << "��ã��" << endl;
	}

	return 0;

}