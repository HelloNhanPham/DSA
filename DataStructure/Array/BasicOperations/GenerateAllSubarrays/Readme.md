---------------------------------------------------------------------------------------------------
Given an array, generate all the possible subarrays of the given array using recursion.
---------------------------------------------------------------------------------------------------
Examples: 
1/ Input : [1, 2, 3]
Output : [1], [1, 2], [2], [1, 2, 3], [2, 3], [3]
2/ Input : [1, 2]
Output : [1], [1, 2], [2]
---------------------------------------------------------------------------------------------------
Approach: We use two pointers start and end to maintain the starting and ending point of the array and follow the steps given below:
1/ Stop if we have reached the end of the array.
2/ Increment the end index if start has become greater than end.
3/ Print the subarray from index start to end and increment the starting index.
---------------------------------------------------------------------------------------------------