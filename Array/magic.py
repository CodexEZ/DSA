def magic(x: int, n: int)->int:
    li = []
    while x>0:
        d = x%10
        li.append((d+n)%10)
        x = x//10
    r = 0
    for i in range(len(li)-1,-1,-1):
        r = r*10 + li[i]
    return r

print(magic(328,3))
