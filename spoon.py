import time
def spoon():
    food = input(sname + " is hungry! What would you like to feed them? (you have: Freakyina, Frito, M) ")
    if (food == "M"):
        print("Ew! " + sname + " hated it!")
    if (food == "Freakyina"):
        print("Hmm.. " + sname + " doesn't like it, but doesn't hate it either.")
    if (food == "Frito"):
        print("Yum! " + sname + " loves it!")
    print(sname + " is feeling good!")
    time.sleep(4)
    print(sname + " has to use the bathroom!")
    bathroom = input("Where do you take it? (options: Park, Sidewalk, Ignore) ")
    if (bathroom == "Park"):
        print(sname + " is enjoying the park!")
        doreturn = input(sname + " has let it out. You can return home now! (options: Home, Stay) ")
        if (doreturn == "Home"):
            spoon()
        if (doreturn == "Stay"):
            print("The heat is blazing! You have to return home.")
            time.sleep(3)
            spoon()
name = input("Welcome to the spoon adoption place greg. Wait, You're not greg, what is your name, random person? ")
print("Spoon has remembered this.")
if (name == "greg"):
    print("oh wait sorry you are greg")
sname = input("We have a spoon in store for you, " + name + "!" + " What would you like to name it? ")
print("Spoon has remembered this.")
print("Alright! " + sname + " is ready for you!")
spoon()