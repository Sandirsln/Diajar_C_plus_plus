#include <iostream>
using namespace std;
int main(){

    double a, b;
    cin >> a;
    b = int (a);
    if (a == b){
        cout << b << " " << b << endl;
    }
    else if (a > 0){
        cout << b << " " << b + 1 << endl;
    }
    else {
        cout << b - 1 << " " << b << endl;
    }
    return 0;
}