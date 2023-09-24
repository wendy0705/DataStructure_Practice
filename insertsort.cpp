#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int A[], int n) {

    for (int i = 0; i < n-1; ++i) {
        // 在未排序的部分中查找最小元素的索引
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {//不需要跟自己再比一次
            if (A[j] < A[minIndex]) {
                minIndex = j;//minIndex要能在這個for迴圈中變換
            }
        }
        
        // 如果找到了更小的元素，交换它们
        if (minIndex != i) {
            swap(A[i], A[minIndex]);
        }
    }
}

int main() {
    int A[] = {64, 25, 12, 22, 11};
    int n = sizeof(A) / sizeof(A[0]);
    
    selectionSort(A, n);

    for (int i = 0; i < n; ++i) {
        std::cout << A[i] << " ";
    }

    return 0;
}

