a, b = map(int, input().split())

# Please write your code here.

def cal(a,b):
    if(a>b) : a*=2 b+=10
    else : a+=10 b*=2
    return a,b
print(cal(a,b))