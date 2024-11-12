import time
import os
import random
def cls():
    os.system('cls' if os.name=='nt' else 'clear')
def eat():
    print("Oh no! " + name + " is hungry!")
    food = input("You currently have 1 'PH'! Would you like to feed them this?")
    if ("Yes" in food):
        print(name + " is happy!")
print("Welcome to FORK")
print("SPOON EXPANSION PACK")
print("RUN 'fork' IN SPOON TO MERGE FOR A SPECIAL PET")
name = input("What would you like to name your fork? (WARNING: THIS WRITES TO YOUR FORK FILE) ")
with open('fork.txt', 'w') as f:
    f.write('This user has used the FORK expansion.')
    f.write(' \n')
    f.write("The fork's name is " + name + "!")
    f.close()
print("We have created your FORK file! You may use this with the instructions above this message ^^^^")
print("Starting...")
time.sleep(2)
cls()
doEat = random.randint(1, 2)
if (doEat == 2):
    eat()
if (doEat == 1):
    print("Your fork is satisfied.")
    time.sleep(2)