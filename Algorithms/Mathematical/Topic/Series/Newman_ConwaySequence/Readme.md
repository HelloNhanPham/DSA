Newman-Conway Sequence is the one that generates the following integer sequence. 
1 1 2 2 3 4 4 4 5 6 7 7…

In mathematical terms, the sequence P(n) of Newman-Conway numbers is defined by the recurrence relation 

P(n) = P(P(n - 1)) + P(n - P(n - 1)) 
with seed values P(1) = 1 and P(2) = 1

Given a number n, print n-th number in Newman-Conway Sequence.

Examples:

Input : n = 2
Output : 1

Input : n = 10
Output : 6

Method 1 (Use Recursion) : 

A simple approach is direct recursive implementation of above recurrence relation.

Time complexity: O(n)
Auxiliary Space: O(n)

Method 2 (Use Dynamic Programming): 

We can avoid repeated work done in method 1 by storing the values in the sequence in an array. 

Time complexity: O(n) 
Auxiliary Space: O(n) 