# arr = [1,1,1,3] -> [1,3]

def removeDuplicates(a: list()):

    result = set([])
    for i in range(0, len(arr)):
        result.add(arr[i])

    # result.add("Ans")
    return result.__len__()


arr = [1, 1, 3]
print(removeDuplicates(arr))
