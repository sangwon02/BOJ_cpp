#include <iostream>
using namespace std;

int main5596()
{
	int S[4], T[4];

	cin >> S[0] >> S[1] >> S[2] >> S[3];
	cin >> T[0] >> T[1] >> T[2] >> T[3];
	
	int sn = S[0] + S[1] + S[2] + S[3];
	int tn = T[0] + T[1] + T[2] + T[3];
	
	if (sn >= tn)
	{
		cout << sn;
	}
	else 
	{
		cout << tn;
	}

	return 0;
}