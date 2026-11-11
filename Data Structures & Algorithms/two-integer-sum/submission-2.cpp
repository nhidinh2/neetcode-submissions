class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hihi; 
        for (int i = 0; i < nums.size(); i++){
            int need = target - nums[i]; 
            if (hihi.count(need) == 0){ 
                hihi[nums[i]] = i;
            }else {
                return {hihi[need], i};
            }

        }
        return {}; 
        
    }
};
