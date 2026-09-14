// Description: find range where elements may lie by doubling index, then binary search.
#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int key) {
      while (l <= r)
      {
            int mid = l+(r-l)/2;
            if (arr[mid] == key) return mid;
            else if (arr[mid]<key) l = mid+1;
            else r = mid-1;
      }
      return -1;
}

int exponentialSearch(int arr[], int n, int key) {
      if (arr[0]==key) return 0;
      int i=1;
      while (i<n && arr[i]<=key) i*=2;
      return binarySearch(arr,i/2,std::min(i,n-1), key);
}

int main() {
      int arr[] = {2,3,4,10,40};
      cout << exponentialSearch(arr,5,10) << endl;
      return 0;
}