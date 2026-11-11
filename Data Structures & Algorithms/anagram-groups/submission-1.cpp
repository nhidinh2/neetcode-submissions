class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> temp;
        vector<vector<string>> ans;

        int count = 0;
        for (int i = 0; i < strs.size() ; i++) {
            string word = strs[i];
            string compare = word;
            sort(compare.begin(), compare.end()); 
            if (temp.count(compare) > 0){
                int value = temp[compare];
                ans[temp[compare]].push_back(word);
            } else{
                temp.insert({compare,count});
                ans.push_back(vector<string>{word});
                count ++;
            }
        }



        return ans; 
        
    }
};
