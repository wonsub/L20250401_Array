#include <iostream>
#include <conio.h >

using namespace std;

char Input()
{
	char Key;
	cin >> Key;
	return Key;
}

void Render()
{
	cout << "��Ĭ" << endl;
}

int main()
{
	bool IsRunning = true;
	char Key = 0;

	while(IsRunning)
	{
		Key = Input();
		if (Key == 'Q')
		{
			IsRunning = false;
			cout << "Ż��" << endl;
		}
		
		Render();
	}

	

	return 0;

}