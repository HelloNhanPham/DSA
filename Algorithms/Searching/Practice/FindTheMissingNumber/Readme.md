Given an array arr[] of size N-1 with integers in the range of [1, N], the task is to find the missing number from the first N integers.

Note: There are no duplicates in the list.

Input: arr[] = {1, 2, 4, 6, 3, 7, 8}
Output: 5
Explanation: Here the size of the array is 7, so the range will be [1, 8]. The missing number between 1 to 8 is 5

---------------------------------------------------

In this practice, I will introduce somes method to solve this problem, include using Searching Algorithms and other algorithms:

1/ Math Theory.
- First, I will use Math theory, sum of n first integer number equal n(n+1)/2. I will calculate the sum of the arrays, after that, I will take the substraction of n(n+1)/2 - sumOfArrays.
- The maincpp is MathTheory.cpp

2/ Using Only Sorting.
- Second, I will use only sorting algorithms to sovle the problem. After sorting the array, arr[i] = i+1, so that the first element not equal to the index + 1. Therefor, this element is also the missing number of the array.
- The main program in the UsingOnlySorting.py

3/ Using Apearrance Array.
- Third, I create one array manages the appearance of the number from 1 to n + 1 (array with size = n + 1, n is the size of the given array). Traversal the array and at each index in the temp array equal to the value of the element in the given array is True. Later, traversal the team Array, if temArray[i] equal False, it is the missing number.
- The main program in the UsingCountingArray.py