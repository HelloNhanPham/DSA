---------------------------------------------------------------------------------------------------
Intuition:
If observed closely, we can see that a group of array elements is changing its position. For example see the following array:
arr[] = {1, 2, 3, 4, 5, 6} and d = 2. The rotated array is {3, 4, 5, 6, 1, 2}
The group having the first two elements is moving to the end of the array. This is like reversing the array.
But the issue is that if we only reverse the array, it becomes { 6, 5, 4, 3, 2, 1}. 
After rotation, the elements in the chunks having the first 5 elements { 6, 5, 4, 3} and the last 2 elements {2, 1} should be in the actual order as of the initial array [i.e., {3, 4, 5, 6} and {1, 2}]but here it gets reversed. 
So if those blocks are reversed again we get the desired rotated array.
---------------------------------------------------------------------------------------------------
So the sequence of operations is:
1/ Reverse the whole array 
2/ Then reverse the last ‘d’ elements and 
3/ Then reverse the first (N-d) elements.

As we are performing reverse operations it is also similar to the following sequence:
1/ Reverse the first ‘d’ elements
2/ Reverse last (N-d) elements
3/ Reverse the whole array.
---------------------------------------------------------------------------------------------------
Illustration:
1/ Take the original array as it is.
2/ Separate it out into first ‘d’ elements and ‘n-d’ elements.
3/ Reverse first ‘d’ elements.
4/ Reverse the next ‘n-d’ elements.
5/ Next, reverse the whole array. We have the final array rotated by d elements to left.
---------------------------------------------------------------------------------------------------