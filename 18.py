# s = [1, 0, -1, 0, -2, 2], and target = 0.

def fourSum(nums, target):
    result = []
    nums.sort()
    # s = [-2, -1, 0, 0, 1, 2]

    for i in range(len(nums)-3):
        for j in range(i+1, len(nums)-2):
            sumA = nums[i]+nums[j]
            l = j+1
            r = len(nums)-1
            while l < r:
                sumB = sumA + nums[l] + nums[r]
                if sumB == target:
                    result.append([nums[i], nums[j], nums[l], nums[r]])
                    l += 1
                    r -= 1
                elif sumB < target:
                    l += 1
                else:
                    r -= 1
    return result


nums = [1, 0, -1, 0, -2, 2]
target = 0
print(fourSum(nums, target))
