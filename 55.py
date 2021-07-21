# A = [2,3,1,1,4], return true.
# A = [3,2,1,0,4], return false

def jumpGame(nums: list()):
    maxReach = 0
    for i in range(len(nums)):
        if i > maxReach:
            return False
        maxReach = max(maxReach, i+nums[i])

    return True


nums = [2, 3, 1, 1, 4]
print(jumpGame(nums))
