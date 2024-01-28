import math

r1 = int(input("Enter rate1 = "))
n = int(input("Enter no. of hours = "))
r2 = int(input("Enter rate2 = "))
mins = int(input("Enter mins = "))

hours = math.ceil(mins/60)
if(hours >= n):
    print(n*r1 + (hours-n)*r2)
else:
    print(hours*r1)