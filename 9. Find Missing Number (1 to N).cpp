#include<iostream>
using namespace std;

int missingNumber(int arr[], int n) {
      int total = (n+1)*(n+2)/2;

      for (int i = 0; i < n; ++i) total -= arr[i];
      return total;
};

int main() {
      int arr[] = {1,2,3,4,5,6};
      cout << missingNumber(arr,6) << endl;
      return 0;
}