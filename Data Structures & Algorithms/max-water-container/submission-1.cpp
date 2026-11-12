class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0; int r = heights.size() - 1; 
        int m = min(heights[l], heights[r]) * (r - l); 
        while (l<r){
            if (heights[l] > heights[r]){
                r--; 
                m = max(m, min(heights[l], heights[r]) * (r - l));
            } else {
                l++; 
                m = max(m, min(heights[l], heights[r]) * (r - l));
            }
        }
        return m; 

        
    }
};
