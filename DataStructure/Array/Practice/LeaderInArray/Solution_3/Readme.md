+ Find leaders and print them in the same order as they are: 
+ In the solution 2, we get time linear complexity, but the output we get is not in the same order as the elements that appear in our input array, so to get out output in the same order as in the input array, we can use stack data structure.
---------------------------------------------------------------------------------------------------
Illustration:
+ Let the array be arr[] = {16, 17, 4, 3, 5, 2}, we will store the ans in a stack to print in the same order.
arr[] = {16, 17, 4, 3, 5, 2} , max_from_right = 2 , ans[] = { 2 }
arr[] = {16, 17, 4, 3, 5, 2} , max_from_right = 5 , ans[] = { 5, 2 }
arr[] = {16, 17, 4, 3, 5, 2} , max_from_right = 5 , ans[] = { 5, 2 } 
arr[] = {16, 17, 4, 3, 5, 2} , max_from_right = 5 , ans[] = { 5, 2 }
arr[] = {16, 17, 4, 3, 5, 2} , max_from_right = 17 , ans[] = { 17, 5, 2 }
arr[] = {16, 17, 4, 3, 5, 2} , max_from_right = 17 , ans[] = { 17, 5, 2 }
---------------------------------------------------------------------------------------------------
Follow the below steps to implement the idea:
1/ We start from the last index position. The last position is always a leader, as there are no elements towards its right. 
2/ And then we iterate on the array till we reach index position = 0.
3/ Each time we keep a check on the maximum value
4/ Every time we encounter a maximum value than the previous maximum value encountered, we will store the value in the stack as it is the leader
5/ We will iterate on the stack and print the values.
---------------------------------------------------------------------------------------------------