#include <iostream>

using namespace std;

int main5532()
{
	int L, A, B, C, D;
	int day = 0;

	cin >> L >> A >> B >> C >> D;

	while (A > 0 || B > 0)
	{
		A = A - C;
		B = B - D;

		day += 1;
	}

	day = L - day;

	cout << day;

	return 0;
}