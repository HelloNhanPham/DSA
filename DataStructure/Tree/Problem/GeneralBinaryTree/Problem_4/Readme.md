Problem: Convert a Binary Tree into its Mirror Tree (Invert Binary Tree)

Given a binary tree, the task is to convert the binary tree into its Mirror tree. Mirror of a Binary Tree T is another Binary Tree M(T) with left and right children of all non-leaf nodes interchanged. 

-----------------------------------------------------------------------------------

Solution 1: Using recursion

The idea is to traverse recursively and swap the right and left subtrees after traversing the subtrees.

Follow the steps below to solve the problem:
    - Call Mirror for left-subtree i.e., Mirror(left-subtree)
    - Call Mirror for right-subtree i.e., Mirror(right-subtree)
    - Swap left and right subtrees.
    - temp = left-subtree
    - left-subtree = right-subtree
    - right-subtree = temp

Time Complexity: O(N), Visiting all the nodes of the tree of size N.
Auxiliary Space: O(N), For function call stack space.

-----------------------------------------------------------------------------------

Solution 2: Convert a Binary Tree into its Mirror Tree using Level Order Traversal

The idea is to do queue-based level order traversal. While doing traversal, swap left and right children of every node.

Follow the steps below to solve the problem:
    - Perform the level order traversal
    - While traversing over the tree swap the left and right child of current node

Time Complexity: O(N), Traversing over the tree of size N
Auxiliary Space: O(N), Using queue to store the nodes of the tree

-----------------------------------------------------------------------------------