s = "PAYPALISHIRING"
numRow = 3


def zigzag(s: str, numRow: int):
    if numRow == 1:
        return s

    row_map = {row: "" for row in range(1, numRow+1)}

    row = 1
    up = True

    for letter in s:
        row_map[row] += letter
        if(row == 1 or row < numRow and up):
            row += 1
            up = True
        else:
            row -= 1
            up = False

    result = ""
    for row in range(1, numRow+1):
        result += row_map[row]

    return result


print(zigzag(s, numRow))
