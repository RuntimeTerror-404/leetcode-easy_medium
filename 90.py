# nums = [1,2,2]

def subsets(nums:list()):
    res = []
    if(len(nums) == 1):
        ans.append(nums)
        ans.append([])
        return ans
    index = 0
    subset = []
    def backtrack(nums,subset,index):
        for i in range(index,len(nums)):
            subset.append(nums[i])
            backtrack(nums, subset, index+1)
            subset.pop(-1)
            
        res.copy(subset)
    backtrack(nums, subset, index)

    return res

nums = [1,2,2]
print(subsets(nums))



