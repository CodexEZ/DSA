li = [5,4,7,2,1]

res = []

for i in range(0,len(li)):
    flag = True
    for  j in range(i,len(li)):
        if(li[i]<li[j]):
            flag = False
    if flag :
        res.append(li[i])

print(res)