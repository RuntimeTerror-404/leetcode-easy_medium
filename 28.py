# Input: haystack = "helloo", needle = "oo"
# Output: 2

def trackString(s: str, needle: str):
    for i in range(len(s)):
        for j in range(len(needle)):
            if s[i] == needle[j]:
                return i


s = "helloo"
needle = "oo"

print(trackString(s, needle))
