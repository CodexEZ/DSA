result = []
nums = [5, 10, 12, 13, 15, 18]
def perfect(start,target, path):
    if target == 0:
        result.append(path)
        return 
    for i in range(start,len(nums)):
        if nums[i]<=target:
            perfect(i+1,target - nums[i],path + [nums[i]])
perfect(0,30,[])
print(result)