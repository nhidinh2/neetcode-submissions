import numpy as np
class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        nums_temp = nums.copy()
        nums_temp.sort()
        for i in range (len(nums_temp) - 1): 
            print(len(nums_temp))
            if nums_temp[i+1] == nums_temp[i]: 
                return True 

        return False 
        
        