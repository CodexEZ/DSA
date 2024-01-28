def rotate( li:list, n:int)->list:
    temp = [0] * len(li)
    for i in range(0,len(li)):
        temp[(i+n)%len(li)] = li[i]
    li  =  temp
    print(li)
rotate([1,2,3,4,5],3)