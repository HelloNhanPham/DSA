Problem: Height of binary tree.

Given a binary tree, find its height.
Note: The height of an empty tree is 0 and the height of a tree with single node is 1

Example 1:
Input:
     1
    /  \
   2    3
Output: 2

Example 2:
Input:
  2
   \
    1
   /
 3
Output: 3 

Your Task:
You do not need to read input or print anything. Your task is to complete the function height() which takes root node of the tree as input parameter and returns an integer denoting the height of the tree. If the tree is empty, return 0. 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 <= Number of nodes <= 105
1 <= Data of a node <= 109

----------------------------------------------------------------------------------

Solution 1: Recursively calculate the height of the left and the right subtrees of a node and assign height to the node as max of the heights of two children plus 1.

Follow the below steps to Implement the idea:
    - Recursively do a Depth-first search.
    - If the tree is empty then return 0
    - Otherwise, do the following
        + Get the max depth of the left subtree recursively  i.e. call maxDepth( tree->left-subtree)
        + Get the max depth of the right subtree recursively  i.e. call maxDepth( tree->right-subtree)
        + Get the max of max depths of left and right subtrees and add 1 to it for the current node.
        + max_depth = max(max dept of left subtree,  max depth of right subtree) + 1  
    Return max_depth.

----------------------------------------------------------------------------------