#include <iostream>
using namespace std;
int main(){
    int N;
    int C;
    for (int i=0; i<C; i++){
        cin >> N;
        int A[N];
        for (int j=0; j<N; j++){
            cin >> A[j];
        }
        int max = A[0];
        int min = A[0];
        for (int k=0; k<N; k++){
            if (A[k] > max){
                max = A[k];
            }
            if (A[k] < min){
                min = A[k];
            }
        }
        cout << "Nilai terbesar adalah " << max << endl;
        cout << "Nilai terkecil adalah " << min << endl;
    }
}