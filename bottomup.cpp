#include <iostream>
using namespace std;

void adjust(int tree[], int i, int n) {
    int x = tree[i];
    int j = 2 * i;
    while (j <= n) {
        if (j < n && tree[j] < tree[j + 1]) {
            j = j + 1;
        }
        if (x >= tree[j]) {
            break;
        }else{
            tree[j / 2] = tree[j];     
            j = 2 * j;
        }
    }
    tree[j / 2] = x;
}

int main() {
    int tree[] = {-1, 16, 5, 33, 17, 25, 19, 40, 50, 8, 28}; // Index 0 is not used
    int n = sizeof(tree) / sizeof(tree[1]) - 1;   // sizeof是占多少bytes的意思
    // Print the initial tree
    cout << "Initial Tree: ";
    for (int i = 1; i <= n; i++) {
        cout << tree[i] << " ";
    }
    cout << endl;

    // Call adjust function
    for (int i = n/2; i >= 1; i--) {
        adjust(tree, i, n);
    }

    // Print the adjusted tree
    cout << "Adjusted Tree: ";
    for (int i = 1; i <= n; i++) {
        cout << tree[i] << " ";
    }
    cout << endl;

    return 0;
}
