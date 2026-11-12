class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans; 
        vector<int> left;
        vector<int> right; 
 
        left.push_back(nums[0]); 
        right.push_back(nums[nums.size() - 1]); 
        for (int i = 1; i < nums.size(); i++ ){
            left.push_back(left[i-1] * nums[i]);
            right.push_back(right[i-1] * nums[nums.size() - 1 - i]);
        }
        for (int i = 0; i < nums.size(); i++ ){
                int leftProduct = (i == 0) ? 1 : left[i - 1];
                int rightProduct = (i == nums.size() - 1) ? 1 : right[nums.size() - 2 - i];
                ans.push_back(leftProduct * rightProduct);
        }
        return ans; 
    }
};
