a, b = map(int, input().split())

# Please write your code here.
res = 0

def is_magic_number(x):
    return (x%3 == 0) or ('3' in str(x) or '6' in str(x) or '9' in str(x))


for i in range(a, b+1):
    if(is_magic_number(i) == True): res+=1

print(res)
