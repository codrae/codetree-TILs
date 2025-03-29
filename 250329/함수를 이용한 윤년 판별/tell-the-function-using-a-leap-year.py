y = int(input())

# Please write your code here.
def is_yunneon(x):
    if x%4==0 :
        if x%100 == 0 and x % 400 != 0 :
            return False
        return True
    return False

if(is_yunneon(y)): print("true")
else: print("false")