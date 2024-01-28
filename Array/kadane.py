def maxsub(li:list)->int:
    maxsum = currsum = li[0]
    for num in li[1:]:
        currsum = max(num, currsum + num)
        maxsum = max(maxsum,currsum)
    print(maxsum)
maxsub([-2,1,-3,4,-1,2,1,-5,4])
