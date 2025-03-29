a, b = map(int, input().split())

# Please write your code here.
def is_Prime(x):
    for i in range(2, x):
        if(x%i == 0): return False
    return True

sum = 0

for i in range(a,b+1):
    if(is_Prime(i)) : sum += i

print(sum)