#include<iostream>
#include<vector>
using namespace std;

int itsplace(vector<int>& arr, int si, int ei) {
    int idx = 0;
    int a = si, b = ei;
    for (int i = si + 1; i <= ei; i++) {
        if (arr[si] > arr[i]) idx++;
    }
    swap(arr[si], arr[si + idx]); // Place pivot in its correct position
    int pivotIndex = si + idx;
    while (a < pivotIndex && b > pivotIndex) {
        if (arr[a] > arr[pivotIndex] && arr[b] < arr[pivotIndex]) {
            swap(arr[a], arr[b]);
            a++;
            b--;
        } else if (arr[a] <= arr[pivotIndex]) a++;
        else b--;
    }
    return pivotIndex;
}

void quicksort(vector<int>& arr, int si, int ei) {
    if (si >= ei) return; // Base case
    int p = itsplace(arr, si, ei);
    quicksort(arr, si, p - 1); // Exclude pivot index
    quicksort(arr, p + 1, ei); // Exclude pivot index
}

int main() {
    vector<int> arr = {5, 3, 4, 2, 6, 1};
    int si = 0, ei = arr.size() - 1;
    quicksort(arr, si, ei);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
