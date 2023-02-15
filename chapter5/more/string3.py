# Find the the number of names
name = input("Full name: ")

# Start a counter
names = 1

# List of characters that could mean a new name
special_char = [" ", "-"]

# Look for spaces
for c in name:
    if c in special_char:
        names += 1

# Print number of names
print(f"You have {names} names.")