def findMissingNumber(lst):
    lst.sort()
    for i in range(len(lst)):
        if lst[i]!=i+1:
            return (i+1)
    return 0

lst = [1,3,5,4,2,8,9,7]
print("I have this list list = {}".format(lst))
print("The missing number is: {}".format(findMissingNumber(lst)))
