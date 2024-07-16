#include <vector>
#include <iostream>

class Solution {
public:
    int findDuplicate(std::vector<int>& nums) {
        int slow = 0, fast = 0;

        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        slow = 0;
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1, 3, 4, 2, 2};
    int result = solution.findDuplicate(nums);
    std::cout << "The duplicate number is: " << result << std::endl;
    return 0;
}
