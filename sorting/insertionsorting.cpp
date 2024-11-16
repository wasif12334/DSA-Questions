#include <iostream>
using namespace std;
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main() {
    int arr1[] = {12, 31, 41, 47, 40, 45, 69, 56, 67, 88, 42};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    insertionSort(arr1, size1);
    cout << "Sorted array : ";
    for (int i = 0; i < size1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;}