'''
[10, 1, 2, 7, 6, 1, 5] and target 8
sort = [1, 1, 2, 5, 6, 7, 10]
[
  [1, 7],
  [1, 2, 5],
  [2, 6],
  [1, 1, 6]
]
'''
# sort = [1, 1, 2, 5, 6, 7, 10]


def combinationSum2(a: list(), target: int):
    a.sort()
    res = []

    def backtracking(curr, pos, target):
        if target == 0:
            res.append(curr.copy())
        if target <= 0:
            return
        prev = -1
        for i in range(pos, len(a)):
            if a[i] == prev:
                continue
            curr.append(a[i])
            backtracking(curr, pos+1, target-a[i])
            curr.pop()
            prev = a[i]

    backtracking([], 0, target)
    return res


a = [10, 1, 2, 7, 6, 1, 5]
target = 8
print(combinationSum2(a, target))
