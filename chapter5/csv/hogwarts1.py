# Counts the students in each house
import csv

# Dictionary to count the houses
houses = {
    "Gryffindor": 0,
    "Hufflepuff": 0,
    "Slytherin": 0,
    "Ravenclaw": 0
}
# Open the csv
with open("hogwarts.csv", "r") as house_list:
    # Read the csv and import as a dictionary called reader
    reader = csv.DictReader(house_list)

    print(reader.fieldnames)

    # Add 1 to the correct house for each row in house_list (reader)
    for row in reader:
        print(row)
        house = row["House"]
        houses[house] += 1

# Print out results
#print(houses)
for house in houses:
    count = houses[house]
    print(f"{house}: {count}")