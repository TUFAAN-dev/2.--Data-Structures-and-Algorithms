#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
      for (int i = 0; i < n; ++i) if (arr[i] == key) return i;
      return -1;
};

int main() {
      int arr[] {4, 2, 7, 1, 9};
      int idx = linearSearch(arr, 5,7);
      cout << "Found at index: " << idx << endl;
      return 0;
}