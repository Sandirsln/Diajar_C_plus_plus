#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    cin >> a;
    int b = 0;
    for(int i=0;i<a.length();i++){
        b+=a[i]-'0';
    }
    cout << b;
}