#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
      int left = 0; int right = n - 1;
      while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == key) return mid;
            else if (arr[mid] < key) left = mid + 1;
            else right = mid - 1;
      }
      return -1;
};

int main() {
      int arr[] = {1,3,5,7,9};
      cout << binarySearch(arr, 5,7) << endl;
      return 0;
}