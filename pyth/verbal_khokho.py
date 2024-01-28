import numpy as np

n = int(input("Enter the number of players"))
players =  input("Enter the numbers noted by players, separated by space")

players = players.split()
dig = players[0]
count = 0
for i in players:
    if(i != dig):
        count+=1
print(count)