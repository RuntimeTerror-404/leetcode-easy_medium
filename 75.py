'''
nums = [2,0,2,1,1,0]
output = [0,0,1,1,2,2]
'''


def sortColors(nums: list()):
    l = 0
    curr = 0
    r = len(nums)-1

    while(curr <= r):
        if nums[curr] == 0:
            nums[l], nums[curr] = nums[curr], nums[l]
            l += 1
            curr += 1
        elif nums[curr] == 2:
            nums[r], nums[curr] = nums[curr], nums[r]
            curr += 1
            r -= 1
        else:
            curr += 1

    return nums


nums = [2, 0, 2, 1, 1, 0]
print(sortColors(nums))
