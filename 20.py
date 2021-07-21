# s = "( ) [ ] { }"
# s = ") { ( ) "

def isValid(s: str):
    stack = []
    closeTOopen = {
        ")": "(",
        "]": "[",
        "}": "{"
    }

    for char in s:
        if char in closeTOopen:
            if stack and stack[-1] == closeTOopen[char]:
                stack.pop()
            else:
                return False
        else:
            stack.append(char)
    return True if not stack else False

s = "()[}]{}"

print(isValid(s))

