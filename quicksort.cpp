#include <iostream>
#include <vector>

using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// 快速排序分区函数，返回分区后的基准元素位置
void quickSort(vector<int>& arr, int low, int high) {
    
    if (low < high) {
        int pivot = arr[low]; // 要注意這個pivot不能用來跟其他array值換位置，因為記憶體位址不同
        int i = low;      // 初始化 i = array的第一位址
        int j = high + 1;     // 初始化 j = 超出array的位址
        int n = arr.size();

        while(j > i){
            do {
                i++;  //從array的第二位址開始比較
            } while (arr[i] < pivot);

            do {
                j--;  //從array的最後一個位址開始比較
            } while (arr[j] > pivot);

            // 這裡是i, j都停下來的時候互換，加上條件是因為會有在經過上面兩個迴圈後，j < i的情形(可能i會超過array
            // 本身蠻多的，但不影響結果)，這樣不僅不執行i,j互換，且會跳出這個比較迴圈。
            if (j > i){
                swap(arr[i], arr[j]);
            }
        };

        //j < i 後，arr[j]與arr[low](也就是那段array的pivot)互換 
        swap(arr[j], arr[low]);
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
        quickSort(arr, low, j - 1);
        quickSort(arr, j + 1, high);
    }
}


int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int n = arr.size();

    cout << "original:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "sorted:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}