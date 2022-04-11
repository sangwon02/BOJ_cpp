#include <iostream>
using namespace std;

int main5543()
{
	int num[5];
	int a, b;
	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];
	}

	a = num[0];
	b = num[3];

	for (int i = 1; i < 3; i++)
	{
		if (a > num[i])
		{
			a = num[i];
		}
	}
	
	if (b > num[4])
	{
		b = num[4];
	}

	a = a + b - 50;

	cout << a;

	return 0;
}