# nums = [3, 5, 0, 5, 3, 1, 0]

class solution:
    def singleNum(self, nums: list()):

        counts = {}
        for n in nums:
            if n not in counts:
                counts[n] = 1
            else:
                del counts[n]

        return list(counts.keys())[0]


obj = solution()
nums = [3, 5, 0, 5, 3, 1, 0]
print(obj.singleNum(nums))
