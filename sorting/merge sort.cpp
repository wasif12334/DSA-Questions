#include <iostream>
using namespace std;
void merge(int arr[], int left[], int left_size, int right[], int right_size) {
    int i = 0, j = 0, k = 0;
    while (i < left_size && j < right_size) {
        if (left[i] < right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }
    while (i < left_size) {
        arr[k++] = left[i++];
    }
    while (j < right_size) {
        arr[k++] = right[j++];
    }
}
void mergeSort(int arr[], int size) {
    if (size <= 1) {
        return;
    }
    int mid = size / 2;
    int left[mid];
    int right[size - mid];
    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }
    for (int i = mid; i < size; i++) {
        right[i - mid] = arr[i];
    }
    mergeSort(left, mid);
    mergeSort(right, size - mid);
    merge(arr, left, mid, right, size - mid);
}

int main() {
    int arr1[] = {10, 34, 12, 98, 32, 67, 42, 123};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    mergeSort(arr1, size1);
    cout << "Sorted array : ";
    for (int i = 0; i < size1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}