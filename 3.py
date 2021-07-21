# Given "abcabcbb", the answer is "abc", which the length is 3.

# Given "bbbbb", the answer is "b", with the length of 1.

# Given "pwwkew", the answer is "wke"

s = "abcabcbb"


def longestSubstring(str):
    d = {}
    res = 0
    i = 0

    for j in range(len(s)):
        if s[j] in d:
            i = max(i, d[s[j]]+1)

        else:
            res = max(res, j-i+1)
            d[s[j]] = j

    return res


print(longestSubstring(s))
