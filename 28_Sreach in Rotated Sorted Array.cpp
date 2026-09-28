#include<iostream>
using namespace std;

int searchRotated(int arr[], int n, int key) {
      int l = 0, r = n-1;
      while (l<=r) {
            int mid=l+(r-1)/2;
            if(arr[mid] == key) return mid;
            if (arr[l] <= arr[mid]) {           // Left Sorted
                  if (arr[l] <= arr[mid] && key<arr[mid]) r = mid-1;
                  else l = mid+1;
            } else {                            // Right Sorted
                  if (key > arr[mid] && key <= arr[r]) l = mid+1;
                  else r = mid + 1;
            }
      }
      return -1;
}

int main() {
      int arr[] = {4,5,6,7,0,1,2};
      cout << searchRotated(arr,7,0) << endl;
      return 0;
}