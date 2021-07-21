'''
For example, given array S = [-1, 0, 1, 2, -1, -4],->[-4, -1, -1, 0, 1, 2]
A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]
'''


def threeSum(s: list()):
    res = []
    s.sort()
    length = len(s)
    for i in range(length-2):
        if i > 0 and s[i] == s[i-1]:
            continue
        l = i+1
        r = length-1
        while l < r:
            sum = s[i]+s[l]+s[r]
            if sum < 0:
                l += 1
            elif sum > 0:
                r -= 1
            else:
                res.append([s[i], s[l], s[r]])
                while l < r and s[l] == s[l+1]:
                    l += 1
                while l < r and s[r] == s[r-1]:
                    r -= 1
                l = l+1
                r = r-1
    return res


s = [-1, 0, 1, 2, -1, -4]
# [-4, -1, -1, 0, 1, 2]
print(threeSum(s))
