def printList(obj, lst):
    print("{} {}".format(obj,lst))
    
def reorderList(arr, index):
    lst = [0 for i in range(len(arr))]
    for i in range(len(index)):
        lst[index[i]] = arr[i]
    printList("The order array is:",lst)
    
arr = [50, 40, 70, 60, 90]
index = [3,  0,  4,  1,  2]

printList("The array is:",arr)
printList("The given index is:",index)
reorderList(arr,index)