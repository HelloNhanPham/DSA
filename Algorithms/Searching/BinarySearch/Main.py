def BinarySearch(lst, value):
    right = len(lst) - 1
    left = 0
    while left <= right:
        mid = int((left + right)/2)
        if lst[mid] == value:
            return True
        elif value > lst[mid]:
            left = mid + 1
        else:
            right = mid - 1
    return False
    
lst = [i for i in range(10)]
print(lst)
print("Choosen number is: {}".format(2))
res = "YES" if BinarySearch(lst, 2) == True else "NO"
print("Check number 2 in list: {}".format(res))
print("Choosen number is: {}".format(11))
res = "YES" if BinarySearch(lst, 11) == True else "NO"
print("Check number 11 in list: {}".format(res))
print("Choosen number is: {}".format(-1))
res = "YES" if BinarySearch(lst, -1) == True else "NO"
print("Check number -1 in list: {}".format(res))