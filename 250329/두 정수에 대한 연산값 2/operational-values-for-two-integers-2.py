a, b = map(int, input().split())

# Please write your code here.

def cal(a,b):
    small,big = (a,b) if a < b else (b,a)
    small += 10
    big *= 2
    return small, big

a, b = cal(a,b)

print(a, b)