Title: Inorder Tree Traversal without Recursion
In this post, we have seen in detail about the Inorder traversal and how it is implemented using recursion.
Here in this post, we will discuss methods to implement inorder traversal without using recursion.

1. Inorder Traversal using Stack
    - As we already know, recursion can also be implemented using stack. Here also we can use a stack to perform inorder traversal of a Binary Tree. Below is the algorithm for traversing a binary tree using stack.
    - Create an empty stack (say S).
    - Initialize the current node as root.
    - Push the current node to S and set current = current->left until current is NULL
    - If current is NULL and the stack is not empty then:
    - Pop the top item from the stack.
    - Print the popped item and set current = popped_item->right 
    - Go to step 3.
    - If current is NULL and the stack is empty then we are done.

Time Complexity: O(N) where N is the number of nodes in the tree
Auxiliary Space: O(N)

2. Inorder traversal using Morris Algorithm
Following is the algorithm to implement inorder traversal using Morris traversal:
    - Initialize the current node as root.
    - While current is not null, check if it has a left child.
    - If there is no left child, print the current node and move to the right child of the current node.
    - Otherwise, find the rightmost node of the left subtree or the node whose right child is the current node:
        + If the right child is NULL, make current as the right child and move to the left child of current.
        + If the right child is the current node itself, print current node, make the right child NULL and move to the right child of the current node.

Time Complexity: O(N), where N is the number of nodes in a tree.
Auxiliary Space: O(1)