- Desciptions:
Given an unsorted array and a number n, find if there exists a pair of elements in the array whose difference is n.
Examples: 
Input: arr[] = {5, 20, 3, 2, 50, 80}, n = 78
Output: Pair Found: (2, 80)
Input: arr[] = {90, 70, 20, 80, 50}, n = 45
Output: No Such Pair

- Solution:
We can use sorting and Binary Search to improve time complexity to O(nLogn). The first step is to sort the array in ascending order. Once the array is sorted, traverse the array from left to right, and for each element arr[i], binary search for arr[i] + n in arr[i+1..n-1]. If the element is found, return the pair. Both first and second steps take O(nLogn). So overall complexity is O(nLogn). 