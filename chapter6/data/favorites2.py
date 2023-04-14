import csv

titles = []

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)

    for row in reader:
        # If title is not in the list
        if not row["title"] in titles:
            # Add to the list
            titles.append(row["title"])

# Printing every title in the list
for title in titles:
    print(title)