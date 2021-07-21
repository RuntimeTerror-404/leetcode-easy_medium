arr = [1, 3, 2, 1, 5, 2]
arr2 = [23,11,11,10,19]


def waterCapacity(height):
    area = 0
    max_area = 0

    i = 0
    j = len(height)-1

    while(i <= j):
        if (height[i] > height[j]):
            area = (j-i) * height[j]
            j -= 1
        else:
            area = (j-i) * height[i]
            i += 1
        if area > max_area:
            max_area = area
    return max_area

print(waterCapacity(arr))
