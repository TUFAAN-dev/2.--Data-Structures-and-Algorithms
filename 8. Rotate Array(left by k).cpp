#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
      while (start < end) swap(arr[start++], arr[end--]);
};

void rotateLeft (int arr[], int n, int k) {
      k %= n;
      reverse(arr, 0, k-1);
      reverse(arr, k, n-1);
      reverse(arr, 0, n-1);
};

int main() {
      int arr[] = {1,2,3,4,5};
      rotateLeft(arr, 5, 2);
      for (int i = 0; i < 5; ++i) cout << arr[i] << " ";
      cout << endl;

      return 0;
}
