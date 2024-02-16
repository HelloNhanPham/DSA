Problem: K distance from root

Given a Binary Tree of size n and an integer, k. Print all nodes that are at distance k from root (root is considered at distance 0 from itself). Nodes should be printed from left to right. If k is more than the height of the tree, nothing should be printed.

For example, if below is a given tree and k is 2. Output should be 4 5 6.

          1
       /     \
     2        3
   /         /   \
  4        5    6 
     \
      8

Example 1
Input:
k = 0
      1
    /   \
   3     2
Output: 1
Explanation: 1 is the only node which is 0 distance from the root 1.

Example 2
Input:
k = 3
        3
       /
      2
       \
        1
      /  \
     5    3
Output: 5 3
Explanation:  5 and 3 are the nodes which is 3 distance from the root 3.

Your Task:
You don't have to take input. Complete the function Kdistance() that accepts root node and k as parameters and returns the value of the nodes that are at a distance k from the root. (The values are returned as a vector in cpp, as ArrayList in Java, and as list in Python)

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
1 <= n <= 10^4
0 <= k <= 30