#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = (right + left) / 2;

        // Check if the target is present at mid
        if (arr[mid] == target)
            return mid;

        // If the target is greater, ignore the left half
        if (arr[mid] < target)
            left = mid + 1;

        // If the target is smaller, ignore the right half
        if (arr[mid] > target)
            right = mid - 1;
    }
    return -1;
    // Target was not found in the array
}

int main() {
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 42};
    int target = 16;
    int result = binarySearch(arr, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}