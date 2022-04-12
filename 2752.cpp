#include <iostream>
#include <algorithm>

using namespace std;

int main2752()
{
	int num[3];

	cin >> num[0] >> num[1] >> num[2];
	sort(num, num + 3);
	for (int i = 0; i < 3; i++)
	{
		cout << num[i] << ' ';
	}
	
	return 0;
}
