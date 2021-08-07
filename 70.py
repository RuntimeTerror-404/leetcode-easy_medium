'''
x = 2 => 1 step + 1 step, 2 step
x = 3 => 1 step + 1 step + 1 step, 2 step + 1 step, 1 step + 2 step
'''


def climbingStairs(n: int()):
    if n == 1:
        return 1
    if n == 2:
        return 2
    # if n == 3:
    #     return 3
    # x = n // 2
    return (climbingStairs(n-1) + climbingStairs(n-2))


n = 5
print(climbingStairs(n))
