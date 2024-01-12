import random

def LinearSearch(lst, value):
    size = len(lst)
    for i in range(size):
        if lst[i]==value:
            return True
    return False

lst = [random.randrange(100) for i in range(10)]

print(lst)

number = random.randrange(100)

print("Random number is {}".format(number))

answer = "in" if LinearSearch(lst, number) else "not in"

print(f"{number} {answer} the list!")