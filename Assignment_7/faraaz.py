d = {}
min_roll = None  # Initialize min_roll to None

while True:
    r = input('Enter roll no: ')
    m = input('Enter marks: ')
    d[r] = int(m)  # Convert marks to an integer
    if min_roll is None or d[r] < d[min_roll]:
        min_roll = r  # Update min_roll if the new marks are lower
    ch = input('Do you want to continue Y/N: ')
    if ch.lower() == 'n':
        break

print("Dictionary:", d)
print("Student with roll number " + min_roll + " has the lowest marks: " + str(d[min_roll]))
