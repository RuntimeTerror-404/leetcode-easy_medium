'''
Input: "babad" Output: "bab"

Input: "cbbd" Output: "bb"
'''

'''
def longestPallindrome(s):
    res = " "
    resLen = 0

    for i in range(len(s)):

        if len(s) % 2 != 0:
            l = i
            r = i
            while(l >= 0 and r < len(s) and s[l] == s[r]):
                if r-l+1 > resLen:
                    res = s[l:r+1]
                    resLen = r-l+1
                l -= 1
                r += 1

        else:
            l = i
            r = i+1
            while(l >= 0 and r < len(s) and s[l] == s[r]):
                if r-l+1 > resLen:
                    res = s[l:r+1]
                    resLen = r-l+1
                l -= 1
                r += 1

    return res
s1 = "babad"
s2 = "cbbd"
print(longestPallindrome(s1))
print(longestPallindrome(s2))
'''


def longestPallindrome(s):
    res = ""
    t = ""
    t = s[::-1]
    for i in range(len(s)):
        if(s[i] == t[i]):
            res += s[i]

    return res


s1 = "babad"
s2 = "cbbd"
print(longestPallindrome(s1))
print(longestPallindrome(s2))
