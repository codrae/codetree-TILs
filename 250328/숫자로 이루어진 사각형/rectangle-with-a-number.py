n = int(input())

# Please write your code here.

a = 1

for _ in range(n):
    for _ in range(n):
        print(a, end=" ")
        if(a != 9): a += 1
        else : a = 1
    print()
