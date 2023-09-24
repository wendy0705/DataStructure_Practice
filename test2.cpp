#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

int main(){
    int i = 0;
    int j = 5;
    vector<int> arr = {5, 4, 3, 2, 1};
    int pivot = arr[0];
    int n = arr.size();
    
    while(j > i){
        do {
            i++;
            // i = 1,2,3,4,5
            // arr[i] = 4,3,2,1,1920298867
        } while (arr[i] < pivot);

        do {
            j--;
            // j = 4
            // arr[j] = 1
        } while (arr[j] > pivot);

        //這裡是i,j都停下來的時候互換 
        if (i < j){
            swap(arr[i],arr[j]);
        }
    }

    //這裡是i,j交會後，arr[j]與pivot互換 
    swap(arr[j], arr[0]);
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

    
    // cout << i <<" ";
    // cout << j <<" ";
    return 0;
   
}