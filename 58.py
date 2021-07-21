# Input: "Hello World"
# Output: 5

def lastLen(s: str()):
    count = 0
    for i in range(len(s)-1, 0, -1):
        # count += 1
        if s[i] == " ":
            break
        count += 1
    return count


s = "Hello Worlddd"
print(lastLen(s))
