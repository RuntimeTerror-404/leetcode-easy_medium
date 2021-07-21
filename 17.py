def letterCombinations(digits: int):
    phone_map = {
        "2": "abc", "3": "def", "4": "ghi", "5": "jkl", "6": "mno", "7": "pqrs",
        "8": "tuv", "9": "wxyz"
    }
    
    number = str(digits)
    # number = "23"

    if number == "":
        return []
    
    result = ['']
    for char in number:
        values = phone_map[char]
        new_result = []
        for prefix in result:
            current = prefix
            for value in values:
                new_result.append(current+value)
        result = new_result
    return result

print(letterCombinations(23))

    





























    # if digits == "":
    #     return []

    # result = ['']
    # for char in number:
    #     values = phone_map[char]
    #     new_result = []
    #     for prefix in result:
    #         curr_element = prefix
    #         for value in values:
    #             new_result.append(curr_element+value)
    #     result = new_result

    # return result








# digits = "23"
