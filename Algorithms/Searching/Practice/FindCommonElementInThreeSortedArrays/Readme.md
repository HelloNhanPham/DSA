Given three Sorted arrays in non-decreasing order, print all common elements in these arrays.

Examples: 

Input: 
ar1[] = {1, 5, 10, 20, 40, 80} 
ar2[] = {6, 7, 20, 80, 100} 
ar3[] = {3, 4, 15, 20, 30, 70, 80, 120} 
Output: 20, 80

Input: 
ar1[] = {1, 5, 5} 
ar2[] = {3, 4, 5, 5, 10} 
ar3[] = {5, 5, 10, 20} 
Output: 5, 5

---------------------------------------------------------------------------------------------------

In this practice, I will introduce 2 solutions:

1/ The first solutions is use binary search, I will traversal the first array and wih each element use binary search to find the element in the second and third array.
- Time complexity: O(n1*(log(n2)+log(n3)))
- The code is implemented in UseBinary.cpp

2/ The second solutions is create the Intersection of two arrays,I will create Intersection of first and second array and later (*), I will create Intersection of (*) and third array.
- Time complexity: O(n1+n2+n3)
- The code is implemented in Intersection.cpp