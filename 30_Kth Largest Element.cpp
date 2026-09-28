#include<iostream>
using namespace std;

int partition(int arr[], int l, int r) {
      int pivot = arr[r], i = l;
      for (int j = l; j<r; ++j)
            if (arr[j] <= pivot)
            swap(arr[i++], arr[j]);
            swap(arr[i], arr[r]);
            return i;
}

int quickSelect(int arr[], int l, int r, int k) {
      if (l == r) return arr[l];
      int p = partition(arr,l,r);
      if (p - l == k) return arr[p];
      else if (p-l > k) return quickSelect(arr,l,p-1,k);
      else return quickSelect(arr,p+1,r,k-(p-l+1));
}

int main() {
      int arr[] = {3,2,1,5,6,4};
      int k = 2;
      int n = sizeof(arr) / sizeof(arr[0]);
      cout << quickSelect(arr,0,n-1,n-k) << endl;
      return 0;
}