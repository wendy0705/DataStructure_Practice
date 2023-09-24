#include <iostream>
using namespace std;
// 階層遞迴計算

int Fac(int n){
    if(n == 0){
        return 1;
    }else{
        return n * Fac(n-1);
    }
}

int main(){
    cout << Fac(5);
}