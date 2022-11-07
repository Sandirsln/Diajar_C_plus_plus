#include <iostream>
using namespace std;
int main()
{
    int n, x=0;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << x%10;
            x++;
        }
        cout << endl;
    }
}