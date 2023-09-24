#include <iostream>
#include <vector>

using namespace std;

// 快速排序分区函数，返回分区后的基准元素位置
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low]; // 选择第一个元素作为 pivot
    int i = low - 1;      // 初始化 i
    int j = high + 1;     // 初始化 j

    while (true) {
        // 从左向右找到大于等于 pivot 的元素
        do {
            i++;
        } while (arr[i] < pivot);

        // 从右向左找到小于等于 pivot 的元素
        do {
            j--;
        } while (arr[j] > pivot);

        // 如果 i 和 j 相遇或交叉，结束分区
        if (i >= j) {
            return j;
        }

        // 交换 arr[i] 和 arr[j]
        swap(arr[i], arr[j]);
    }
}

// 快速排序主函数
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // 分区
        int pivotIndex = partition(arr, low, high);

        // 递归对左侧和右侧子数组进行排序
        quickSort(arr, low, pivotIndex);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    vector<int> arr = {12, 4, 5, 6, 7, 3, 1, 15, 8, 2, 9};
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