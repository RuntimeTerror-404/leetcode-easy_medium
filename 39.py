# [2, 3, 6, 7,1] and target 7 => [[7], [2,2,3]]

def combinationSum(a: list(), target: int):
    res = []

    def dfs(i, cur, total):
        if total == target:
            res.append(cur.copy())
            return

        if i >= len(a) or total > target:
            return

        cur.append(a[i])
        dfs(i, cur, total + a[i])
        cur.pop()
        dfs(i+1, cur, total)

    dfs(0, [], 0)
    return res


a = [2, 3, 6, 7]
target = 7
print(combinationSum(a, target))
