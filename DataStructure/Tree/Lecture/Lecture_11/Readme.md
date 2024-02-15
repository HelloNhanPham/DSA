Title: Binary Search Tree

A. Introduction
    
    - A Binary Search Tree (BST) is a special type of binary tree in which the left child of a node has a value less than the node’s value and the right child has a value greater than the node’s value. This property is called the BST property and it makes it possible to efficiently search, insert, and delete elements in the tree.
    
    - The root of a BST is the node that has the smallest value in the left subtree and the largest value in the right subtree. Each left subtree is a BST with nodes that have smaller values than the root and each right subtree is a BST with nodes that have larger values than the root.
    
    - Binary Search Tree is a node-based binary tree data structure that has the following properties: 
        + The left subtree of a node contains only nodes with keys lesser than the node’s key.
        + The right subtree of a node contains only nodes with keys greater than the node’s key.
        + This means everything to the left of the root is less than the value of the root and everything to the right of the root is greater than the value of the root. Due to this performing, a binary search is very easy.
        + The left and right subtree each must also be a binary search tree.  
        + There must be no duplicate nodes(BST may have duplicate values with different handling approaches).
    
    - Handling approach for Duplicate values in the Binary Search tree:
        + You can not allow the duplicated values at all.
        + We must follow a consistent process throughout i.e either store duplicate value at the left or store the duplicate value at the right of the root, but be consistent with your approach.
        + We can keep the counter with the node and if we found the duplicate value, then we can increment the counter.
    
    - Below are the various operations that can be performed on a BST.
       
        + Insert a node into a BST: A new key is always inserted at the leaf. Start searching a key from the root till a leaf node. Once a leaf node is found, the new node is added as a child of the leaf node. Implemention:
            struct node* insert(struct node* node, int key)
            {
                // If the tree is empty, return a new node
                if (node == NULL)
                    return newNode(key);
                // Otherwise, recur down the tree
                if (key < node->key)
                {
                    node->left = insert(node->left, key);
                }
                else if (key > node->key)
                {
                    node->right = insert(node->right, key);
                }
                // Return the node pointer
                return node;
            }
        Time Complexity: O(N), where N is the number of nodes of the BST 
        Auxiliary Space: O(1) 

        + Inorder traversal: In case of binary search trees (BST), Inorder traversal gives nodes in non-decreasing order. We visit the left child first, then the root, and then the right child. Implemention:
            void inorder(struct node* root)
            {
                if (root != NULL) 
                {
                    inorder(root->left);
                    cout << " " << root->key;
                    inorder(root->right);
                }
            }
        Time Complexity: O(N), where N is the number of nodes of the BST 
        Auxiliary Space: O(1) 

        + Preorder traversal: Preorder traversal first visits the root node and then traverses the left and the right subtree. It is used to create a copy of the tree. Preorder traversal is also used to get prefix expression on of an expression tree. Implemention:
            void preOrder(struct node* root)
            {
                if (root != NULL) {
                    cout << " " << root->key;
                    preOrder(root->left);
                    preOrder(root->right);
                }
            }
        Time Complexity: O(N), where N is the number of nodes of the BST 
        Auxiliary Space: O(1) 

        + Postorder traversal: Postorder traversal first traverses the left and the right subtree and then visits the root node. It is used to delete the tree. In simple words, visit the root of every subtree last. Implemention:
            void postOrder(struct node* root)
            {
                if (root != NULL) 
                {
                    postOrder(root->left);
                    postOrder(root->right);
                    cout << " " << root->key;
                }
            }
        Time Complexity: O(N), where N is the number of nodes of the BST 
        Auxiliary Space: O(1) 

        + Level order traversal: Level order traversal of a BST is breadth first traversal for the tree. It visits all nodes at a particular level first before moving to the next level. Implemention:
            int height(struct node* node)
            {
                if (node == NULL)
                    return 0;
                else {
                    // Compute the depth of each subtree
                    int lDepth = height(node->left);
                    int rDepth = height(node->right);
                    // Use the larger one
                    if (lDepth > rDepth)
                        return (lDepth + 1);
                    else
                        return (rDepth + 1);
                }
            }
            void printGivenLevel(struct node* root, int level)
            {
                if (root == NULL)
                    return;
                if (level == 1)
                    cout <<"  "<< root->key;
                else if (level > 1) {
            
                    // Recursive Call
                    printGivenLevel(root->left, level - 1);
                    printGivenLevel(root->right, level - 1);
                }
            }
            void printLevelOrder(struct node* root)
            {
                int h = height(root);
                int i;
                for (i = 1; i <= h; i++) {
                    printGivenLevel(root, i);
                    cout <<"\n";
                }
            }
        Time Complexity: O(N), where N is the number of nodes of the BST 
        Auxiliary Space: O(1) 
    
        + Print nodes at given Level : It prints all the nodes at a particular level of the BST. Implemention:
            void printGivenLevel(struct node* root, int level)
            {
                if (root == NULL)
                    return;
                if (level == 1)
                    cout <<" "<< root->key;
                else if (level > 1) {
                    // Recursive Call
                    printGivenLevel(root->left, level - 1);
                    printGivenLevel(root->right, level - 1);
                }
            }
        Time Complexity: O(N), where N is the number of nodes of the BST 
        Auxiliary Space: O(1) 
        
        + Print all leaf nodes: A node is a leaf node if both left and right child nodes of it are NULL. Implemention:
            void printLeafNodes(struct node* root)
            {
                // If node is null, return
                if (!root)
                    return;
            
                // If node is leaf node,
                // print its data
                if (!root->left && !root->right) {
            
                    cout <<" "<< root->key;
                    return;
                }
            
                // If left child exists,
                // check for leaf recursively
                if (root->left)
                    printLeafNodes(root->left);
            
                // If right child exists,
                // check for leaf recursively
                if (root->right)
                    printLeafNodes(root->right);
            }
        Time Complexity: O(N), where N is the number of nodes of the BST 
        Auxiliary Space: O(1) 

        + Print all non leaf node: A node is a non leaf node if either of its left or right child nodes are not NULL. Implemention:
            void printNonLeafNode(struct node* root)
            {
                // Base Cases
                if (root == NULL
                    || (root->left == NULL
                        && root->right == NULL))
                    return;
            
                // If current node is non-leaf,
                if (root->left != NULL
                    || root->right != NULL) {
                    cout <<" "<< root->key;
                }
            
                // If root is Not NULL and its one
                // of its child is also not NULL
                printNonLeafNode(root->left);
                printNonLeafNode(root->right);
            }
        Time Complexity: O(N), where N is the number of nodes of the BST 
        Auxiliary Space: O(1) 

        + Right view of BST: Right view of a Binary Search Tree is set of nodes visible when tree is visited from Right side. Implemention:
            void rightViewUtil(struct node* root, int level, int* max_level)
            {
                if (root == NULL)
                    return;
                if (*max_level < level) {
                    cout <<"\t"<< root->key;
                    *max_level = level;
                }
                rightViewUtil(root->right, level + 1,
                            max_level);
                rightViewUtil(root->left, level + 1,
                            max_level);
            }
        void rightView(struct node* root)
            {
                int max_level = 0;
                rightViewUtil(root, 1, &max_level);
            }
        Time Complexity: O(N), where N is the number of nodes of the BST 
        Auxiliary Space: O(1)   

        + Left view of BST: Left view of a Binary Search Tree is set of nodes visible when tree is visited from Left side. Implemention:
            void leftViewUtil(struct node* root, int level, int* max_level)
            {
                if (root == NULL)
                    return;
                if (*max_level < level) {
                    cout <<"  "<< root->key;
                    *max_level = level;
                }
                leftViewUtil(root->left, level + 1,
                            max_level);
                leftViewUtil(root->right, level + 1,
                            max_level);
            }
        Time Complexity: O(N), where N is the number of nodes of the BST 
        Auxiliary Space: O(1)
        
        + Height of BST: It is recursively calculated using height of left and right subtrees of the node and assigns height to the node as max of the heights of two children plus 1. Implemention:
            int height(struct node* node)
            {
                if (node == NULL)
                    return 0;
                else
                {
                    
                    // Compute the depth of each subtree
                    int lDepth = height(node->left);
                    int rDepth = height(node->right);
            
                    // Use the larger one
                    if (lDepth > rDepth)
                        return (lDepth + 1);
                    else
                        return (rDepth + 1);
                }
            }
        Time Complexity: O(N), where N is the number of nodes of the BST 
        Auxiliary Space: O(1) 

        + Delete a Node of BST: It is used to delete a node with specific key from the BST and return the new BST.
            Different scenarios for deleting the node:
                a/ Node to be deleted is the leaf node : Its simple you can just null it out.
                b/ Node to be deleted has one child : You can just replace the node with the child node.
                c/ Node to be deleted has two child :
                d/ Need to figure out what will be the replacement of the node to be deleted.
                e/ Want minimal disruption to the existing tree structure
                f/ Can table the replacement node from the deleted nodes left or right subtree.
                g/ If taking if from the left subtree, we have to take the largest value in the left subtree.
                h/ If taking if from the right subtree, we have to take the smallest value in the right subtree.
                i/ Choose one approach and stick to it. 
        Implementions:
            struct node* deleteNode(struct node* root, int key)
            {
                if (root == NULL)
                    return root;
                if (key < root->key) {
                    root->left = deleteNode(root->left, key);
                }
                else if (key > root->key) {
                    root->right = deleteNode(root->right, key);
                }
                else {
                    if (root->left == NULL) {
                        struct node* temp = root->right;
                        free(root);
                        return temp;
                    }
                    else if (root->right == NULL) {
                        struct node* temp = root->left;
                        free(root);
                        return temp;
                    }
                    struct node* temp = minValueNode(root->right);
                    root->key = temp->key;
                    root->right = deleteNode(root->right, temp->key);
                }
                return root;
            }
        Time Complexity: O(log N), where N is the number of nodes of the BST 
        Auxiliary Space: O(1) 
        
        + Smallest Node of the BST: It is used to return the node with the smallest value in the BST. Implemention:
            struct node* minValueNode(struct node* node)
            {
                struct node* current = node;
            
                while (current && current->left != NULL)
                    current = current->left;
                return current;
            }
        Time Complexity: O(log N), where N is the number of nodes of the BST 
        Auxiliary Space: O(1)

        + Total number of nodes in a BST: The function returns the total count of nodes in the BST. Implemention:
            int nodeCount(struct node* node)
            {
                if (node == NULL)
                    return 0;
                else
                    return nodeCount(node->left) + nodeCount(node->right) + 1;
            }
        Time Complexity: O(N), where N is the number of nodes of the BST 
        Auxiliary Space: O(1) 

        + Delete a BST: It is used to completely delete the BST and deallocate the memory. Implemention:
            struct node* emptyBST(struct node* root)
            {
                struct node* temp;
                if (root != NULL) {
                    emptyBST(root->left);
                    emptyBST(root->right);
                    cout<<"\nReleased node:"<< root->key;
                    temp = root;
                    free(temp);
                }
                return root;
            }
        Time Complexity: O(N), where N is the number of nodes of the BST 
        Auxiliary Space: O(1)

    - Applications of BST:
        + Graph algorithms: BSTs can be used to implement graph algorithms, such as in minimum spanning tree algorithms.
        + Priority Queues: BSTs can be used to implement priority queues, where the element with the highest priority is at the root of the tree, and elements with lower priority are stored in the subtrees.
        + Self-balancing binary search tree: BSTs can be used as a self-balancing data structures such as AVL tree and Red-black tree.
        + Data storage and retrieval: BSTs can be used to store and retrieve data quickly, such as in databases, where searching for a specific record can be done in logarithmic time.

    - Advantages:
        + Fast search: Searching for a specific value in a BST has an average time complexity of O(log n), where n is the number of nodes in the tree. This is much faster than searching for an element in an array or linked list, which have a time complexity of O(n) in the worst case.
        + In-order traversal: BSTs can be traversed in-order, which visits the left subtree, the root, and the right subtree. This can be used to sort a dataset.
        + Space efficient: BSTs are space efficient as they do not store any redundant information, unlike arrays and linked lists.

    - Disadvantages:
        + Skewed trees: If a tree becomes skewed, the time complexity of search, insertion, and deletion operations will be O(n) instead of O(log n), which can make the tree inefficient.
        + Additional time required: Self-balancing trees require additional time to maintain balance during insertion and deletion operations.
        + Efficiency: BSTs are not efficient for datasets with many duplicates as they will waste space.