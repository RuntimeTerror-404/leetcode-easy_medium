# 0 1 2 4 5 6 7 might become 7 5 6 4 0 1 2 , target = 1

def search(nums: list(), target: int):
    if not nums:
        return -1

    low, high = 0, len(nums)-1

    while low <= high:
        mid = (low+high) // 2
        if target == nums[mid]:
            return mid

        if nums[low] <= nums[mid]:
            if nums[low] <= target <= nums[mid]:
                high = mid-1
            else:
                low = mid + 1

        else:
            if nums[mid] <= target <= nums[high]:
                low = mid + 1
            else:
                high = mid - 1

    return -1


s = [7, 5, 6, 4, 0, 1, 2]
target = 2
print(search(s, target))
