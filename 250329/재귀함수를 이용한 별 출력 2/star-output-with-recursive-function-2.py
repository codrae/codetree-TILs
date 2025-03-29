n = int(input())

# Please write your code here.
def f(d):
    if(d == 0): return
    print("* " * d)
    f(d-1)
    print("* " *d)

f(n)
