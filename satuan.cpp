#include <iostream>
using namespace std;
int main(){
    long long a;
    cin >> a;
    if (a > 0 && a < 10){
        cout << "satuan" << endl;
    } if (a >= 10 && a < 100){
        cout << "puluhan" << endl;
    } 
    if (a >= 100 && a < 1000){
        cout << "ratusan" << endl;
    }
    if (a >= 1000 && a < 10000){
        cout << "ribuan" << endl;
    }
    if (a >= 10000 && a < 100000){
        cout << "puluhribuan" << endl;
    }
}