# S = {-1 2 1 -4}, and target = 1.
# target is 2. (-1 + 2 + 1 = 2).

def sumClosest(target: int, s: list()):
    res = 0
    s.sort()

    for i in range(len(s)-2):
        s = i+1
        e = len(s)-1
        while s < e:
            sumHere = s[i]+s[s]+s[e]
            if abs(sumHere-target) < abs(res-target):
                res = sumHere
            if sumHere < target:
                s += 1
            else:
                e -= 1
    return res
