from cs50 import get_string

# Get a string and save it with lower case letters
s = get_string("Do you agree? ").lower()

if s in ["yes", "y"]:
    print("yes")
elif s in ["no", "n"]:
    print("no")