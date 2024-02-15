Title: Tree Traversal Techniques – Data Structure and Algorithm Tutorials
1. Unlike linear data structures (Array, Linked List, Queues, Stacks, etc) which have only one logical way to traverse them, trees can be traversed in different ways. 

2. A Tree Data Structure can be traversed in following ways:
- Depth First Search or DFS
    + Inorder Traversal
    + Preorder Traversal
    + Postorder Traversal
- Level Order Traversal or Breadth First Search or BFS
- Boundary Traversal
- Diagonal Traversal

3. Inorder Traversal
Algorithm Inorder(tree)
    - Traverse the left subtree, i.e., call Inorder(left->subtree)
    - Visit the root.
    - Traverse the right subtree, i.e., call Inorder(right->subtree)

Uses of Inorder Traversal:
    - In the case of binary search trees (BST), Inorder traversal gives nodes in non-decreasing order. To get nodes of BST in non-increasing order, a variation of Inorder traversal where Inorder traversal is reversed can be used.

Time Complexity: O(N)
Auxiliary Space: If we don’t consider the size of the stack for function calls then O(1) otherwise O(h) where h is the height of the tree. 

4. Preorder Traversal
Algorithm Preorder(tree)
    - Visit the root.
    - Traverse the left subtree, i.e., call Preorder(left->subtree)
    - Traverse the right subtree, i.e., call Preorder(right->subtree) 

Uses of Preorder:
    - Preorder traversal is used to create a copy of the tree. Preorder traversal is also used to get prefix expressions on an expression tree.

Time Complexity: O(N)
    - Auxiliary Space: If we don’t consider the size of the stack for function calls then O(1) otherwise O(h) where h is the height of the tree. 

5. Postorder Traversal
Algorithm Postorder(tree):
    - Traverse the left subtree, i.e., call Postorder(left->subtree)
    - Traverse the right subtree, i.e., call Postorder(right->subtree)
    - Visit the root

Uses of Postorder:
    - Postorder traversal is used to delete the tree. Please see the question for the deletion of a tree for details. Postorder traversal is also useful to get the postfix expression of an expression tree

Some other Tree Traversals Techniques
6. Level Order Treversal
    - For each node, first, the node is visited and then it’s child nodes are put in a FIFO queue. Then again the first node is popped out and then it’s child nodes are put in a FIFO queue and repeat until queue becomes empty.

The Boundary Traversal of a Tree includes:
    - left boundary (nodes on left excluding leaf nodes)
    - leaves (consist of only the leaf nodes)
    - right boundary (nodes on right excluding leaf nodes)

Definition:
    - The left boundary is defined as the path from the root to the left-most node. The right boundary is defined as the path from the root to the right-most node. If the root doesn’t have left subtree or right subtree, then the root itself is left boundary or right boundary. Note this definition only applies to the input binary tree, and not apply to any subtrees.
    - The left-most node is defined as a leaf node you could reach when you always firstly travel to the left subtree if it exists. If not, travel to the right subtree. Repeat until you reach a leaf node.
    - The right-most node is also defined in the same way with left and right exchanged.

We break the problem in 3 parts: 
    - Print the left boundary in top-down manner. 
    - Print all leaf nodes from left to right, which can again be sub-divided into two sub-parts: 
        + …..2.1 Print all leaf nodes of left sub-tree from left to right. 
        + …..2.2 Print all leaf nodes of right subtree from left to right. 
    - Print the right boundary in bottom-up manner.
    - We need to take care of one thing that nodes are not printed again. e.g. The left most node is also the leaf node of the tree.

Time Complexity: O(n) where n is the number of nodes in binary tree.
Auxiliary Space: O(n)

Clean Code with returning the traversal:
[No direct printing + Iterative Version of the code]

Algorithm:
    - Right Boundary – Go Right Right until no Right. Dont Include Leaf nodes. (as it leads to duplication)
    - Left Boundary – Go Left Left until no Left. Dont Include Leaf nodes. (as it leads to duplication)
    - Leaf Boundary – Do inorder/preorder, if leaf node add to the List.
    - We pass the array as reference, so its the same memory location used by all functions, to coordinate the result at one place.

Time Complexity: O(n) where n is the number of nodes in binary tree.
Auxiliary Space: O(n) 

Using Morris Traversal:
    - The basic idea behind the Morris traversal approach is to traverse a binary tree in a way that does not use any extra space other than the tree itself.
    - The approach uses the fact that each node in a binary tree has a maximum of two pointers, which can be used to traverse the tree in a specific manner without using any extra space. Specifically, we can modify the structure of the tree itself in a way that allows us to traverse it without using any extra space.

Follow the steps below to implement above idea:
    - Initialize the current node as the root of the tree.
    - While the current node is not null:
        a. If the current node has no left child, print its data and move to its right child.
        b. If the current node has a left child:
            i. Find the rightmost node in the left subtree of the current node. This node is the inorder predecessor of the current node.
            ii. If the right child of the inorder predecessor is null, set it to the current node and move to the left child of the current node.
            iii. If the right child of the inorder predecessor is not null (i.e., it points back to the current node), set it to null and print the data of the current node. Then move to the right child of the current node.

Time complexity: O(n), where n is the number of nodes in the binary tree.
Auxiliary Space: O(1)