a, b, c = map(int, input().split())

# Please write your code here.
def getMin(*args) :
    res = 999999
    for i in args:
        if(res > i) : res = i
    return res

print(getMin(a,b,c))