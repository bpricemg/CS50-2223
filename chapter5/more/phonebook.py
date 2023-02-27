
names = {
    "Foster": "413-555-5555",
    "Aiden": "800-123-4567"
}

name = input("Name: ")

# Search for the name
if name in names:
    number = names[name]
    print(f"Number: {number}")
else:
    print("Not found")