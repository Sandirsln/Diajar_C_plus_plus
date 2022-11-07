#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    for(int b=a; b>=1; b--){
        if (a%b==0) cout << b << endl;
    }
    return 0;
}