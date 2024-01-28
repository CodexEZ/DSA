n = int(input("Enter a number"))
dp = n+1
li = [[0]*dp for i in range(dp)]
for i in range(0,n):
    for j in range(0,i+1):
        if(j==0):
            li[i][j] = i+1
        elif j%2 != 0:
            li[i][j] = li[i][j-1] + ((n-i)*2 - 1)
        elif j%2 == 0:
            li[i][j] = 1 + max([li[i-1][j],li[i-1][j+1]])
print(li)