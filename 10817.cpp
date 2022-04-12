#include <iostream>
#include <algorithm>

using namespace std;

int main10817()
{
	int num[3];

	cin >> num[0] >> num[1] >> num[2];
	sort(num, num + 3);
	
	cout << num[1];

	return 0;
}