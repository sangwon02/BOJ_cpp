#include <iostream>
using namespace std;

int main2442()
{
    int n;
    cin >> n;
    int cnt = n - 1;
    for (int i = 1; i < n*2; i += 2)
    { 
        for (int k = 0; k < cnt; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cnt -= 1;
        cout << endl;
    }
    return 0;
}