import random
print("I m thinking a number between 1 and 100")
print("Choose difficulty, easy or hard")
d=input()
global l
flag=1
if (d=='easy'):
    l=10
elif d=='hard':
    l=5
num = random.randint(0,100)
for i in range(l,0,-1):
    print("You have {} attemps remaining to guess the no.".format(i))
    print("Make a guess")
    x=int(input())
    if(x==num):
        print("Correct, You win")
        flag=0
        break
    elif(x>num):
        print("Too high")
    elif(x<num):
        print("Too low")
if flag==1:
    print("You ran out of attemps, You lose")

    
    
