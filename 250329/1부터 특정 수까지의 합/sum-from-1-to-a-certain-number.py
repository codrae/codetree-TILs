n = int(input())

# Please write your code here.



def f(n):
    sum = 0
    for i in range(1,n+1):
        sum += i
    return sum // 10

print(f(n))