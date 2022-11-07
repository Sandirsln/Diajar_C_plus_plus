#include <iostream>
using namespace std;
int main(){
    long long a;
    cin >> a;
    if (a > 0){
        cout << "satuan" << endl;
    if (a >= 10){
        cout << "puluhan" << endl;
    } 
    if (a >= 100){
        cout << "ratusan" << endl;
    }
    if (a >= 1000){
        cout << "ribuan" << endl;
    }
    else if (a >= 10000){
        cout << "puluhribuan" << endl;
    }
}