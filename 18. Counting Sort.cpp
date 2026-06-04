#include <iostream>
#include <algorithm>
using namespace std;

void countingSort(int arr[], int n) {
    int max = *max_element(arr, arr + n);
    int* count = new int [max + 1] ();

    for (int i = 0; i < n; ++i) ++count[arr[i]];

    int idx = 0;

    for (int i = 0; i <+ max; ++i) {
        while (count[i]-- > 0) arr[idx++] = i;
    };
    delete[] count;
};

int main() {
    int arr[] = {1,5,7,9,3,4,1,5,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    countingSort(arr, n);

    for (int i = 0; i < n; ++i) cout << arr << " ";
    cout << endl;

    return 0;
}