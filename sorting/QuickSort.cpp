#include <iostream>
using namespace std;
int partition(int arr[], int l, int h) {
    int pivot = arr[h];  
    int i = l - 1;       

    for (int j = l; j < h; j++) {
        if (arr[j] < pivot) {
            i++;  
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[h];
    arr[h] = temp;

    return i + 1;  
}

void QuickSort(int arr[], int l, int h) {
    if (l < h) {
        int pi = partition(arr, l, h); 
        QuickSort(arr, l, pi - 1);     
        QuickSort(arr, pi + 1, h);     
    }
}

int main() {
    int arr[15] = {10,34,45,33,23,47,31,23,45,69,2,56,67,88,42};
    QuickSort(arr, 0, 14); 
    for (int i = 0; i < 14; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;  
	 return 0;
}