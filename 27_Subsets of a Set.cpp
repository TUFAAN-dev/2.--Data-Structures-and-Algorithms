#include<iostream>
#include<vector>
using namespace std;

void subsets(vector<int>& nums, int idx, vector<int>& curr) {
      if (idx == nums.size()) {
            cout << "{ ";
            for (int x:curr) cout << x << " ";
            cout << "} ";
            return;
      }
      curr.push_back(nums[idx]);
      subsets(nums, idx+1, curr);
      curr.pop_back();
      subsets(nums, idx+1, curr);
}

int main() {
      vector<int> nums = {1,2,3};
      vector<int> curr;
      subsets(nums,0,curr);
      return 0;
}