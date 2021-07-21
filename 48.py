'''
[
  [1,2,3],
  [4,5,6],
  [7,8,9]
],
[
  [7,4,1],
  [8,5,2],
  [9,6,3]
]
'''


def rotateImage(matrix: list()):
    n = len(matrix[0])
    for row in range(n):
        for col in range(row, n):
            matrix[col][row], matrix[row][col] = matrix[row][col], matrix[col][row]

    for i in range(n):
        matrix[i].reverse()

    


matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
],
print(rotateImage(matrix))
