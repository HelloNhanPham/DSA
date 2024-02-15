Problem: Check for Children Sum Property in a Binary Tree

Given a binary tree, the task is to check for every node, its value is equal to the sum of values of its immediate left and right child. For NULL values, consider the value to be 0.

-----------------------------------------------------------------------------------

Solution 1: Check for Children Sum Property in a Binary Tree using recursion:
    - To solve the problem follow the below idea: Traverse the given binary tree. For each node check (recursively) if the node and both its children satisfy the Children Sum Property, if so then return true else return false.

-----------------------------------------------------------------------------------