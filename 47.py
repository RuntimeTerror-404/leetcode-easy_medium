# nums = [1, 1, 2]
def combinationSum(nums: list()):
    res = []

    prev = -1

    def backtrack(nums, path):
        if not nums:
            res.append(path)
        # [1, 2, 3]
        for x in range(len(nums)):
            if nums[x] == prev:
                continue
            backtrack(nums[:x]+nums[x+1:], path+[nums[x]])
            prev = nums[x]

    backtrack(nums, [])
    return res


nums = [1, 1, 2]
print(combinationSum(nums))
