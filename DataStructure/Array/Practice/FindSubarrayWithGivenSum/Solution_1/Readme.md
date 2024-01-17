---------------------------------------------------------------------------------------------------
Find subarray with given sum using Nested loop
The idea is to consider all subarrays one by one and check the sum of every subarray. Following program implements the given idea. 
Run two loops: the outer loop picks a starting point i and the inner loop tries all subarrays starting from i.
---------------------------------------------------------------------------------------------------
Follow the steps given below to implement the approach:
1. Traverse the array from start to end.
2. From every index start another loop from i to the end of the array to get all subarrays starting from i, and keep a variable currentSum to calculate the sum of every subarray.
3. For every index in inner loop update currentSum = currentSum + arr[j]
4. If the currentSum is equal to the given sum then print the subarray.
---------------------------------------------------------------------------------------------------