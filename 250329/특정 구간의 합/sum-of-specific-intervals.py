n, m = map(int, input().split())
arr = list(map(int, input().split()))
queries = [tuple(map(int, input().split())) for _ in range(m)]

# Please write your code here.
for i in range(m):
    s = 0
    l,r = queries[i]
    for j in range(l-1, r):
        s += arr[j]
    print(s)