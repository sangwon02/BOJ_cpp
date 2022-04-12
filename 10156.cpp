#include <iostream>

using namespace std;

int main10156()
{
	int a, b, c, d;

	cin >> a >> b >> c;
	d = a * b - c;
	if (d < 0)
	{
		d = 0;
	}

	cout << d;
	
	return 0;
}