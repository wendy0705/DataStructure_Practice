#include <iostream>
#include <vector>

using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void shellSort(vector<int>& arr) {
    int n = arr.size();
    int gap = n/2;

    while (gap >= 1) {
        bool swapped = false;
        
        for (int i = 0; i <= n - 1 - gap; i++) {
            if(arr[i] > arr[i + gap]){
                swap(arr[i], arr[i + gap]);
                swapped = true;
                cout << "Swapped: " << arr[i] << " and " << arr[i + gap] << endl;
            }
        }

        if (gap == 1 && swapped) {
            gap = 2;//gap = 1，卻還沒sort好的情況
        }

        gap /= 2;
    }

}

int main() {
    vector<int> arr = {5, 2, 9, 3, 6, 8};

    cout << "Original array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    shellSort(arr);

    cout << "Sorted array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}