---------------------------------------------------------------------------------------------------
Find subarray with given sum using Sliding Window
The idea is simple as we know that all the elements in subarray are positive so, If a subarray has sum greater than the given sum then there is no possibility that adding elements to the current subarray will be equal to the given sum. So the Idea is to use a similar approach to a sliding window. 
---------------------------------------------------------------------------------------------------
Start with an empty subarray 
add elements to the subarray until the sum is less than x( given sum ). 
If the sum is greater than x, remove elements from the start of the current subarray.
---------------------------------------------------------------------------------------------------
Follow the steps given below to implement the approach:
1. Create two variables, start=0, currentSum = arr[0]
2. Traverse the array from index 1 to end.
3. Update the variable currentSum by adding current element, currentSum = currentSum + arr[i]
4. If the currentSum is greater than the given sum, update the variable currentSum as currentSum = currentSum – arr[start], and update start as, start++.
5. If the currentSum is equal to given sum, print the subarray and break the loop.
---------------------------------------------------------------------------------------------------