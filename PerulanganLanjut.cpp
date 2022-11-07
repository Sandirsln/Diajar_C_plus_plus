//lompat bilangan ke 10 dan berhenti di bilangan 42
#include <iostream>
using namespace std;
int main()
{
int i, n;
cout << "Masukkan bilangan bulat positif: ";
cin >> n;
for (i = 2; i <= n; i++)
{
if (n % i == 0)
break;
}
if (i == n)
cout << n << " adalah bilangan prima" << endl;
else
cout << n << " bukan bilangan prima" << endl;
return 0;
}



