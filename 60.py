# [1,2,3] = ["123" "132" "213" "231" "312" "321"]

def permutation(nums: list()):
    total = []
    res = []

    def backtrack(nums, total):
        if not nums:
            res.append(total)
        for i in range(len(nums)):

            backtrack(nums[:i]+nums[i+1:], total+[nums[i]])
    backtrack(nums, [])

    return res


nums = [1, 2, 3]
print(permutation(nums))
