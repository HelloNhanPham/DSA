def FindMissingNumber(lst):
    appearList = [False for i in range(len(lst)+1)]
    for i in range(len(lst)):
        appearList[lst[i]-1] = True
    for i in range(len(appearList)):
        if appearList[i]==False:
            return i+1
    return 0
lst = [1, 10, 9, 8, 7, 6, 5, 4, 3]
print("The list is: {}".format(lst))
print("The missing number is {}".format(FindMissingNumber(lst)))