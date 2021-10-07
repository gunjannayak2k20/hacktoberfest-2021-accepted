import random

number = random.randint(0, 10000)
tries = 0
found = False

print("The number is between 0 - 10000")

while not found:
    guess = int(input("Guess: "))
    tries += 1
    if guess == number:
        found = True
        print(f"You found the number {number} after {tries} tries!")
    elif guess > number:
        print(f"The number you are looking for is less than {guess}!")
    else:
        print(f"The number you are looking for is greater than {guess}!")
