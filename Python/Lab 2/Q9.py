def matMul(A, B):
    m = len(A)
    n = len(A[0]) if A else 0
    p = len(B[0]) if B else 0
    if not A or not B or len(B) != n:
        return None
    result = [[0]*p for _ in range(m)]
    for i in range(m):
        for j in range(p):
            for k in range(n):
                result[i][j] += A[i][k] * B[k][j]
    return result

A = [[1,2,3],[4,5,6],[7,8,9]]
B = [[9,8,7],[6,5,4],[3,2,1]]
result = matMul(A, B)
for row in result:
    print(row)