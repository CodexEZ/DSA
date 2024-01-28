def repeated(n1 :int, n2:int):
    if n1>=n2:
        return "ERROR"
    count = 0
    total = n2-n1+1
    while n1<=n2:
        if len(set(str(n1))) < len(str(n1)):
            count += 1
        n1 += 1
    
    return total - count


print(repeated(101,200))