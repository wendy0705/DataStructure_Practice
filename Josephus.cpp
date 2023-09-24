#include <iostream>
#include <vector>
#include <string>

using namespace std;
// 前兩個數字相加形成的數列

int Josephus(int n){
    int arr[n] = {0};
    for(int i = 1; i < n+1 ; i++){
        if(i == 1)
            arr[i] == 1;
        if(i % 2 == 0)
            arr[i] = 2 * arr[i/2]-1;
        else if(i % 2 == 1)
            arr[i] = 2 * arr[(i-1)/2]+1;
    }
    return arr[n]; 
}

int main(){
    int n = 9;
    int arr[n] = {0};

    for(int i = 1; i <= n; i++){
        arr[i] = Josephus(i);
    }

    cout << "Array elements: ";
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}