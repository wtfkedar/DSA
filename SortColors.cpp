#include<vector>
#include<iostream>
using namespace std;

class Solution {
 public:
  void sortColors(vector<int>& nums) {
    int zero = -1;
    int one = -1;
    int two = -1;

    for (const int num : nums)
      if (num == 0) {
        nums[++two] = 2;
        nums[++one] = 1;
        nums[++zero] = 0;
      } else if (num == 1) {
        nums[++two] = 2;
        nums[++one] = 1;
      } else {
        nums[++two] = 2;
      }
  }
};
int main() {
  Solution solution;
  std::vector<int> nums = {2, 0, 2, 1, 1, 0};
  solution.sortColors(nums);
  for (const int num : nums)
    std::cout << num << " ";
  std::cout << std::endl;
  return 0;
}