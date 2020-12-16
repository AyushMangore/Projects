# 1 : Snake
# 2 : Water
# 3 : Gun
# Rules
# Snake -> Water  p1 win
# Water -> Gun p1 win
# Gun -> Snake p1 win
# Gun -> Water p2 win
# Snake -> Gun p2 win
# Water -> Snake p2 win
import random
import time
print("LOADING",end="")
for i in range(5) :
     print(".",end="")
     time.sleep(1)
print("\n\nWelcome ! To The [Snake,Water,Gun] Game\nYou Have 10 Attempts To Defeat PC\nAll The Best\n\n")
mypoints = 0
pcpoints = 0
i = 1
while i<=10 :
 variable = random.randint(1, 3)
 print(" Enter Your Choice [ Snake, Water, Gun ] ", end=" ")
 choice = input()
 if choice == "Snake" :
    if variable == 1 :
        print("Both Did Snake")
        continue
    elif variable == 2 :
        print("You Got 1 Points")
        mypoints+=1
    elif variable == 3 :
        print("Oops! PC got 1 points")
        pcpoints+=1
 elif choice == "Water" :
    if variable == 2 :
        print("Both Did Water")
        continue
    elif variable == 3 :
        print("You Got 1 Points")
        mypoints+=1
    elif variable == 1 :
        print("Oops! PC got 1 points")
        pcpoints+=1
 elif choice == "Gun" :
    if variable == 3 :
        print("Both Did Gun")
        continue
    elif variable == 1 :
        print("You Got 1 Points")
        mypoints+=1
    elif variable == 2 :
        print("Oops! PC got 1 points")
        pcpoints+=1
 i+=1
print("Match Finished\n\nLOADING",end="")
for i in range(4) :
     print(".",end="")
     time.sleep(1)
print("\nYou Got ", mypoints, " points")
print("PC Got ", pcpoints, " points")
if mypoints>pcpoints :
    print("Congratulations ! You Won The Match ")
elif pcpoints > mypoints:
    print("Oh ! You Lose The Match ")
else :
    print("It Was A Tie")
