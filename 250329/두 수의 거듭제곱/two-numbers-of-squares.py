a, b = map(int, input().split())

# Please write your code here.
def cal(a,b):
    res = 1
    for i in range(b):
        res *= a
    return res

print(cal(a,b))