# Input: [1,3,5,6] 2 Output: 1
# Input: [1,3,5,6], 5 Output: 2

def insertPosition(a: list(), target: int):

    for i in range(0, len(a)-1):
        j = i+1
        if target > a[i] and target <= a[j]:
            return j
        if target < a[0]:
            return 0

        if target > a[len(a)-1]:
            return len(a)


a = [1, 3, 5, 6, 9]
target = 4

print(insertPosition(a, target))
