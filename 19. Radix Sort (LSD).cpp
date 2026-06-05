#include<iostream>
#include<algorithm>
using namespace std;

void radixSort(int arr[], int n) {
    int max = *max_element(arr, arr + n);
    for (int exp = 1; max/exp > 0; exp *= 10) {
        countingSortForRadix(arr,n,exp);
    }
};

void countingSortForRadix(int arr[], int n, int exp) {
    int* output = new int[n];
    int count[10] = {0};
    for (int i = 0; i < n; ++i) ++count[(arr[i]/exp)%10];
    for (int i = 1; i < 10; ++i) count[i] += count[i-1];
    for (int i = n-1; i >= 0; --i) {
        output[count[(arr[i]/exp)%10]-1] = arr[i];
        --count[(arr[i]/exp)%10];
    };
    for (int i = 0; i < n; ++i) arr[i] = output[i];
    delete[] output;
};

int main() {
    int arr[] = {170,45,75,90,802,24,2,66};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    radixSort(arr,n);
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << endl;

    return 0;
}