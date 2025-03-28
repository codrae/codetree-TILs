n, m = map(int, input().split())

# Please write your code here.
for i in range(1, 100):
    if(i > n or i > m): break
    if(n % i == 0 and m % i == 0):
        res = i

print(res)