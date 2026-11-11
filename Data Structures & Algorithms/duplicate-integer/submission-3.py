class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        check = []
        for i in nums: 
            if i in check: 
                return True 
            else:
                check.append(i)
        return False
        
         