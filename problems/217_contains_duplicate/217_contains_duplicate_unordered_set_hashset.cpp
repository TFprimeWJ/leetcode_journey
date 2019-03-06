#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool result = false;
        unordered_set<int> hashSet;
        for(int i = 0; i < nums.size(); i++) {
            if (hashSet.count(nums[i]) > 0) {
                result = true;
            } else {
                hashSet.insert(nums[i]);
            }
        }
        
        return result;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 4};
    Solution solution;
    bool result = solution.containsDuplicate(nums);
    cout << result << endl;
    return 0;
}

