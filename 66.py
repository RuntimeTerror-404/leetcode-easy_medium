'''
a = [1, 2, 3] => [1, 2, 4]
b = [1, 1, 9] => [1, 2, 0]
'''


def plusOne(nums: list()):
    count = 0
    for i in range(len(nums)):
        count = count * 10 + nums[i]

    count = count + 1  # 124
    s1 = str(count)
    res = []
    res.append(",".join(s1))

    return res


a = [1, 2, 3]
print(plusOne(a))
