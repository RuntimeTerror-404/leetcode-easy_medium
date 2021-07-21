nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
# [4,-1,2,1] has the largest sum = 6


# solution using kaden's algorithm
def maxSubArray(nums: list()):
    total_sum = max_sum = nums[0]

    for i in nums[1:]:
        total_sum = max(i, total_sum+i)
        if total_sum > max_sum:
            max_sum = total_sum

    return max_sum


print(maxSubArray(nums))


# brute force approach....
# def maxSubArray(nums: list()):
#     max_sum = 0
#     for i in range(len(nums)-1):
#         sum = nums[i]
#         for j in range(i+1, len(nums)):
#             sum = sum + nums[j]
#             if sum > max_sum:
#                 max_sum = sum

#     return max_sum


# print(maxSubArray(nums))
