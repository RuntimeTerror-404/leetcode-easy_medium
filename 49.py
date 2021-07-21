strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
# total = ['aet', 'aet', 'ant', 'aet', 'ant', 'abt']


def groupAnagram(strs: list()):
    dict = {}
    result = []

    for s in strs:
        sortedword = "".join(sorted(s))
        if sortedword not in dict:
            dict[sortedword] = [s]

        else:
            dict[sortedword].append(s)

    for item in dict.values():
        result.append(item)

    return result


print(groupAnagram(strs))
