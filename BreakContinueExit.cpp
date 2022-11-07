#include <iostream>
using namespace std;
int main()
{
short int i, n;
cin >> n;
for (i = 1; i <= n; i++)
{
if (i % 10 == 0)
continue;
else if (i == 42)
    {
        cout << "ERROR" << endl;
        break;
    }
cout << i << endl;
}

return 0;
}
