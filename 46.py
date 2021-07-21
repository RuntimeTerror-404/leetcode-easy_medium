

def combinationSum(nums: list()):
    res = []

    def backtrack(nums, path):
        if not nums:
            res.append(path)
        # [1, 2, 3]
        for x in range(len(nums)):
            backtrack(nums[:x]+nums[x+1:], path+[nums[x]])

    backtrack(nums, [])
    return res


nums = [1, 2, 3]
print(combinationSum(nums))
