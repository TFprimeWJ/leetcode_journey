#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.empty()) {
            return false;
        }
        
        bool result = false;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                result = true;
            }
        }
        return result;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4};
    Solution solution;
    bool result = solution.containsDuplicate(nums);
    cout << result << endl;
    return 0;
}

