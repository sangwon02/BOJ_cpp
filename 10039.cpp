#include <iostream>
using namespace std;

int main10039() 
{
	int num[5];
	int a = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];
	}

	for (int i = 0; i < 5; i++)
	{
		if (num[i] < 40)
		{
			a += 40;
		}
		else
		{
			a += num[i];
		}
	}
	a = a / 5;
	cout << a;

	return 0;
}