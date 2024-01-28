def merge(l:list, a:list)->list:
    li =[]
    i = j = 0
    while i<len(a) and j<len(l):
        if(a[i]<l[j]):
            li.append(a[i])
            i+=1
        else:
            li.append(l[j])
            j+=1

    while(i<len(a)):
        li.append(a[i])
        i+=1

    while(j<len(l)):
        li.append(l[j])
        j+=1
    return li

print(merge([1,3,5,7],[2,4,6,8]))
