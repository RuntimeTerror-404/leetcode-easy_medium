'''
Input: 123 -> [1 , 2, 3]
Output:  321

Input: -123
Output: -321

Input: 120
Output: 21
'''


def reverseInt(x: int):
    ans = 0
    if (x > 0):
        while(x > 0):
            ans = ans * 10
            ans = ans + (x % 10)
            x = x//10
    else:
        x = -1 * x
        while(x > 0):
            ans = ans * 10
            ans = ans + (x % 10)
            x = x // 10
        ans = -1 * ans
    return ans


a = -123
print(reverseInt(a))


'''
def reverseInt(a: int):
    s1 = ""
    s1 = str(a)
    arr = []
    arr[:] = s1
    arr.reverse()
    s2 = ""
    x = s2.join(arr)
    return x


a = 120
print(reverseInt(a))
'''
