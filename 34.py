# [5, 7, 7, 8, 8, 10] and target value 8,  return [3, 4].

def searchRange(a: list(), target: int):
    res = []
    for i in range(0, len(a)):
        if a[i] == target:
            res.append(i)

    return res


a = [5, 7, 7, 8, 8, 10]
target = 8
print(searchRange(a, target))
