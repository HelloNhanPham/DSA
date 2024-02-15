Problem: Size of a tree is the number of elements present in the tree. Size of the below tree is 5.

Lecture:
Size() function recursively calculates the size of a tree. It works as follows:
Size of a tree = Size of left subtree + 1 + Size of right subtree.

Size(tree)
1. If tree is empty then return 0
2. Else
     (a) Get the size of left subtree recursively  i.e., call 
          size( tree->left-subtree)
     (a) Get the size of right subtree recursively  i.e., call 
          size( tree->right-subtree)
     (c) Calculate size of the tree as following:
            tree_size  =  size(left-subtree) + size(right-subtree) + 1
     (d) Return tree_size

Time Complexity: O(N), As every node is visited once.
Auxiliary Space: O(N), The extra space is due to the recursion call stack and the worst case occurs when the tree is either left skewed or right skewed.
Since this program is similar to traversal of tree, time and space complexities will be same as Tree traversal (Please see our Tree Traversal post for details)