#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main() {
      int arr[] = {4,3,2,7,8,2,3,1};
      int n = sizeof(arr)/sizeof(arr[0]);
      unordered_map<int,int> freq;
      for (int i = 0; i < n; ++i) freq[arr[i]]++;
      cout << "Duplicate: ";

      for (auto p : freq) if (p.second > 1) cout << p.first << " ";
      cout << endl;
      return 0;
}