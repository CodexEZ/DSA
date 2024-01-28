def mints(n:int, length:int)->int:
    sum = n
    for i in range(1,length):
        temp = sum - 1
        sum = sum + temp
    return sum 

print(mints(4,2))


