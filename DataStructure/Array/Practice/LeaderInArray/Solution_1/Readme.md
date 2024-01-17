Naive Approach: The problem can be solved based on the idea mentioned below:
---------------------------------------------------------------------------------------------------
Use two loops. The outer loop runs from 0 to size – 1 and one by one pick all elements from left to right. The inner loop compares the picked element to all the elements on its right side. If the picked element is greater than all the elements to its right side, then the picked element is the leader. 
---------------------------------------------------------------------------------------------------
Follow the below steps to implement the idea:
---------------------------------------------------------------------------------------------------
We run a loop from the first index to the 2nd last index.
And for each index, we run another loop from the next index to the last index.
If all the values to the right of that index are smaller than the index, we simply add the value in our answer data structure. 
---------------------------------------------------------------------------------------------------