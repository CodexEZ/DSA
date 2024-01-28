def factorial(n:int)->int:
    if n == 1:
        return 1
    return n*factorial(n-1)
def strong(num:int)->bool:
    sum = 0
    backup = num
    while(num>0):
        d = num % 10
        sum += factorial(d)
        num = num//10
    if(sum == backup):
        return True
    else:
        return False

n = int(input("Enter a number = "))

if(strong(n)):
    print("YES")
else:
    print("NO")
