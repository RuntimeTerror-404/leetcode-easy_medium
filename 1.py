# Given nums = [2, 7, 11, 15], target = 9, return [0,1]

# nums = [2, 7, 11, 15]
nums = [3, 7, 8, 11, 5]

target = 19


def twoSum(nums, target):
    result = []
    for i in range(0, len(nums)):
        for j in range(1, len(nums)):
            if(nums[i]+nums[j] == target):
                result.append(i)
                result.append(j)
                break

    return result


print(twoSum(nums, target))
