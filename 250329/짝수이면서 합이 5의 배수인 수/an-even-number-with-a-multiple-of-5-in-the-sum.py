n = int(input())

# Please write your code here.
def is_magic_number(int a):
    sum = 0
    for _ in (a != 0) :
        sum += a%10
        a //=10
    return (sum % 5 == 0 and n % 2 ==0)

if(is_magic_number(n)) : print("Yes")
else : print("No")

