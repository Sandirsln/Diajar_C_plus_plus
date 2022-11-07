//bilangan genap dengan while
#include <iostream>
using namespace std;
int main(){
    int a, i = 1;
    cin >> a;
    while (i<a){
    i = i*2;
    }
    if (i==a) 
        cout << "ya";
    else
        cout << "bukan";
}
