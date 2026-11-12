class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans; 
        unordered_map <int, int> freq;
        for (int num : nums){
                freq[num] ++; 
        }
        unordered_map <int, vector<int>> bucket;
        for (auto& entry : freq){
            bucket[entry.second].push_back(entry.first);
        }
        int total = 0; 
        for (int i = nums.size(); i > 0; i -- ){
            for (int a : bucket[i]){
                total ++; 
                ans.push_back(a); 
                if (total == k) { 
                    return ans; 
                }
            }
        }
        return ans; 
    }
};
