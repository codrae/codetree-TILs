n = int(input())

# Please write your code here.
def is_magic_number(a):
    s = 0
    while (a != 0) :
        s += a%10
        a //=10
    return (s % 5 == 0 and n % 2 ==0)

if(is_magic_number(n)) : print("Yes")
else : print("No")

