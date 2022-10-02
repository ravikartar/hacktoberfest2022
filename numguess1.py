import os
import random

# Clearing the screen
os.system("cls")

# Defining the rules of the game
print("\n\t\t******* RANDOM NUMBER GUESSER GAME *******\t\t\t\n")
print("_________________________________________________________________________________")
print("|\t\t\t\t\t\t\t\t\t\t|")
print("|Welcome player!!!\t\t\t\t\t\t\t\t|")
print("|\t\t\t\t\t\t\t\t\t\t|")
print("|How to play the game-\t\t\t\t\t\t\t\t|\n|\t\t\t\t\t\t\t\t\t\t|")
print("|1. This game can be either played in Single mode or Double mode.\t\t\t\t\t|")
print("|2. The game cantain two modes a. Using rounds and b. Using points.\t\t|")
print("|3. Player 1 goes first and enter the value to be guessed.\t\t\t|")
print("|4. Player 2 guesses the value entered by player 1.\t\t\t\t|")
print("|5. The same process of guessing number continues based on the mode selected.   |")
print("|6. The loser need to give a party to the winner...!!\t\t\t\t|")
print("_________________________________________________________________________________")


def round(xplayer, yplayer, score):
    print(xplayer, ", will  enter the number to be guessed by", yplayer, ": ")
    num = int(input("Enter the number: "))
    os.system('cls')
    for i in range(trial):
        try_value = int(input("Enter your guessed value: "))
        if i == (i-1):
            print("You have one more guess left...")
        if try_value == (num):
            score += 10
            print("You guessed the value!!")
            print(yplayer, "guessed the number..!!")
            break
        elif try_value < (num/2):
            print("The value entered is much lesser than the actual value!!")
        elif try_value < (num):
            print("The value entered is lesser than the actual value!!")
        elif try_value > (num+num/2):
            print("The value entered is much greater than the actual value!!")
        elif try_value > (num):
            print("The value entered is greater than the actual value!!")
    else:
        score += 0
        print(yplayer, "couldn't guess it..!!")
        print("The value was", num)
    return score


# Getting names of the players
player1 = input("Enter player1's name: ")
player2 = input("Enter player2's name: ")

# Initialising the scores
score1 = score2 = 0

# Knowing tyhe mode
try:
    mode = int(input("Enter 1 for Rounds and 2 for points: "))
    trial = int(input("Enter number of trials: "))
    if mode == 1 or mode == 2:
        if mode == 2:
            win_point = int(input(
                "Enter the winning point (10 point is awarded for each correct guess done)"))
            while(score1 < 100 or score2 < 100):
                print(round(player1, player2, score2))
                print(round(player2, player1, score1))
        else:
            for i in range(0, round*2):
                if i % 2 == 0:
                    print(round(player1, player2, score2))
                else:
                    print(round(player2, player1, score1))

        # Write your code here

    else:
        print("Invalid input")
except:
    print("A wrong value was entered.")
    print("Please try again")


# if possible add toss using head and tail

# Defining the game
# if mode==1:
