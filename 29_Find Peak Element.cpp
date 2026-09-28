#include<istream>
using namespace std;

int findPeak(int arr[], int n) {
      int l=0,r=n-1;
      while (l<r) {
            int mid=l+(r-l)/2;
            if (arr[mid] < arr[mid+1]) l = mid + 1;
            else r = mid;
      }
      return l;
}

int main() {
      int arr[] = {1,2,3,1};
      cout << findPeak(arr,4) << endl;
      return 0;
}
