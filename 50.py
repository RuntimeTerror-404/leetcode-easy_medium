''' a = 2, n = 10 ==> a^n = 1024'''
a = 2
n = 10


def power(a, n):
    if n == 1:
        return a
    x = n // 2

    return (power(a, x) * power(a, n-x))


print(power(a, n))
