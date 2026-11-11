class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){return false;}
        unordered_map<char, int> hihi; 
        for (char i : s){
            if (hihi.count(i) == 0){
                hihi[i] = 1; 
            } else {
                hihi[i]++; 
            }
            
        }
        for (char i: t){
            if (hihi.count(i) == 0 or hihi[i] == 0){
                return false; 
            } else {
                hihi[i]--; 
            }
        }
        return true; 
    }
};
