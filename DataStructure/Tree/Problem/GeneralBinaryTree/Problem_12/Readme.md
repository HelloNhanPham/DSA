Problem: Minimum Depth of a Binary Tree

Given a binary tree, find its minimum depth.

Example 1
Input:
            1
          /   \
         3     2
        /
       4           

Output: 2
Explanation: Minimum depth is between nodes 1 and 2 since minimum depth is defined as  the number of nodes along the shortest path from the root node down to the nearest leaf node.

Example 2
Input:
             10
          /     \
        20       30
          \        \   
          40        60 
                   /
                  2 

Output: 3
Explanation: Minimum depth is between nodes 10,20 and 40.

Your Task:  
You don't need to read input or print anything. Complete the function minDepth() which takes the root node as an input parameter and returns the minimum depth.
 
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(height of the tree)
 
Constraints:
1 ≤ N ≤ 10^5