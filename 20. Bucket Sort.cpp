#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bucketSort(float arr[], int n) {
    vector <float> buckets[10];
    for (int i = 0; i < n; ++i) {
        int idx = arr[i]*10;
        buckets[idx] .push_back(arr[i]);
    };

    for (int i = 0; i < 10; ++i) sort(buckets[i].begin(), buckets[i].end());
    int k = 0;
    for (int i = 0; i < 10; ++i) {
        for (float val : buckets[i]) arr[k++] = val;
    }
};

int main() {
    float arr[] = {0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12};
    int n = sizeof(arr) / sizeof(arr[0]);
    bucketSort(arr,n);
    
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << endl;

    return 0;
}