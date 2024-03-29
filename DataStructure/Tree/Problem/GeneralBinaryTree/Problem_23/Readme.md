Problem: Sum of Leaf Nodes at Min Level

Given a Binary Tree of size N, find the sum of all the leaf nodes that are at minimum level of the given binary tree.

Example 1
Input: 
         1
        /  \
       2    3
     /  \     \
    4    5     8 
  /  \ 
 7    2      
Output: sum = 5 + 8 = 13

Example 2
Input: 
        1
      /    \
     2      3
    / \    / \
   4   5  6   7
Output: 22

Your Task:
You don't need to read input or print anything. Your task is to complete the function minLeafSum() which takes root node of the tree as input parameter and returns an integer denoting the sum of all the leaf nodes that are at minimum level of the given binary tree. If the tree is empty, return 0. 
 
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1<=N<=10^3
1<=data on node<=10^3