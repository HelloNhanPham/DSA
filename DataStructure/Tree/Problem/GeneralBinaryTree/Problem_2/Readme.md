Problem: A node is a leaf node if both left and right child nodes of it are NULL. 
Here is an algorithm to get the leaf node count.

Lecture:
    getLeafCount(node)
    1) If node is NULL then return 0.
    2) Else If left and right child nodes are NULL return 1.
    3) Else recursively calculate leaf count of the tree using below formula.
        Leaf count of a tree = Leaf count of left subtree + Leaf count of right subtree

Solution 1: 
    - Step 1: Start
    - Step 2: Create a function named “getLeafCount”of int return type that take node as input parameter.
    - Step 3: Set the conditions:  
        a. If the node is NULL, return 0.
        b. If the node has no left or right child, return 1.
        c. Recursively call “getLeafCount” on the left and right child nodes if the node has left or right children, and then return the total of the results.
    - Step 4: End

Solution 2: Using iterator and queue.
    - Step 1: Start
    - Step 2: 
        + If root is NULL return 0;
        + Else create a queue qu and push root to queue and create the variable count to store the number of leaves node.
    - Step 3: Set the conditions:
        + If queue is empty -> return count;
        + If qu.front()->right!=nullptr: qu.push(qu.front()->right) (1)
        + If qu.front()->left!=nullptr: qu.push(qu.front()->left) (2)
        + If not (1) and not (2) -> this node is leaf node -> count increase 1.
    - Step 4: End