from cs50 import get_string

before = get_string("Before: ")
print("After: ")
# Print each character of before 1 at a time (vertically)
for c in before:
    print(c.upper())