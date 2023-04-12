import csv

titles = []

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)

    for row in reader:
        # Remove spaces before and after title, convert all letters to uppercase
        title = row["title"].strip().upper()
        # If title is not in the list
        if not title in titles:
            # Add to the list
            titles.append(title)

# Printing every title in the list
for title in titles:
    print(title)