# [3,2,2,3,6,4], val = 3

def removeElement(a: list(), x: int):
    count = 0
    for i in range(0, len(a)):
        if a[i] == x:
            count += 1
    ans = len(a)-count
    return ans


a = [3, 2, 2, 3, 6, 3]
val = 3
print(removeElement(a, 3))
