#include <iostream>
using namespace std;
void insertion_sorting(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int previous_element = i - 1;
        
        while (previous_element >= 0 && arr[previous_element] > current) {
            arr[previous_element + 1] = arr[previous_element];
            previous_element--;
}
    arr[previous_element + 1] = current;
}}
void printARRAY(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int n = 10;
    int arr[] = {1, 8, 4, 6, 0, 3, 5, 2, 7, 9};
    cout << "Array before sorting: \n";
    printARRAY(arr, n);
    insertion_sorting(arr, n); 
    cout << "Array after sorting: \n";
    printARRAY(arr, n);
    return 0;
}