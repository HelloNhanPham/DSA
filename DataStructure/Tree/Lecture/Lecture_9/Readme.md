Title: Binary Tree

A. Introduction
    - A binary tree is a tree data structure in which each node can have at most two children, which are referred to as the left child and the right child. 
    The topmost node in a binary tree is called the root, and the bottom-most nodes are called leaves. A binary tree can be visualized as a hierarchical structure with the root at the top and the leaves at the bottom.
    - Binary trees have many applications in computer science, including data storage and retrieval, expression evaluation, network routing, and game AI. They can also be used to implement various algorithms such as searching, sorting, and graph algorithms.

    - Representation of Binary Tree:
        + Each node in the tree contains the following: Data, Pointer to the left child, Pointer to the right child
        + In C, we can represent a tree node using structures. In other languages, we can use classes as part of their OOP feature. Below is an example of a tree node with integer data.
    
    - Implemention with struct:
        struct node {
            int data;
            struct node* left;
            struct node* right;
        };

    - Implemention with class:
        class Node {
        public:
            int data;
            Node* left;
            Node* right;
        };
    
    - Basic Operations On Binary Tree:
        + Inserting an element.
        + Removing an element.
        + Searching for an element.
        + Deletion for an element.
        + Traversing an element. There are four (mainly three) types of traversals in a binary tree which will be discussed ahead.

    - Auxiliary Operations On Binary Tree:
        + Finding the height of the tree
        + Find the level of the tree
        + Finding the size of the entire tree.

    - Applications of Binary Tree:
        + In compilers, Expression Trees are used which is an application of binary trees.
        + Huffman coding trees are used in data compression algorithms.
        + Priority Queue is another application of binary tree that is used for searching maximum or minimum in O(1) time complexity.
        + Represent hierarchical data.
        + Used in editing software like Microsoft Excel and spreadsheets.
        + Useful for indexing segmented at the database is useful in storing cache in the system,
        + Syntax trees are used for most famous compilers for programming like GCC, and AOCL to perform arithmetic operations.
        + For implementing priority queues.
        + Used to find elements in less time (binary search tree)
        + Used to enable fast memory allocation in computers. 
        + Used to perform encoding and decoding operations.
        + Binary trees can be used to organize and retrieve information from large datasets, such as in inverted index and k-d trees.
        + Binary trees can be used to represent the decision-making process of computer-controlled characters in games, such as in decision trees.
        + Binary trees can be used to implement searching algorithms, such as in binary search trees which can be used to quickly find an element in a sorted list.
        + Binary trees can be used to implement sorting algorithms, such as in heap sort which uses a binary heap to sort elements efficiently.

    - Binary Tree Traversals:
        + Tree Traversal algorithms can be classified broadly into two categories:
            Depth-First Search (DFS) Algorithms
            Breadth-First Search (BFS) Algorithms
        + Tree Traversal using Depth-First Search (DFS) algorithm can be further classified into three categories:
            Preorder Traversal (current-left-right): Visit the current node before visiting any nodes inside the left or right subtrees. Here, the traversal is root – left child – right child. It means that the root node is traversed first then its left child and finally the right child.
            Inorder Traversal (left-current-right): Visit the current node after visiting all nodes inside the left subtree but before visiting any node within the right subtree. Here, the traversal is left child – root – right child.  It means that the left child is traversed first then its root node and finally the right child.
            Postorder Traversal (left-right-current): Visit the current node after visiting all the nodes of the left and right subtrees.  Here, the traversal is left child – right child – root.  It means that the left child has traversed first then the right child and finally its root node.
    - Tree Traversal using Breadth-First Search (BFS) algorithm can be further classified into one category:
        + Level Order Traversal:  Visit nodes level-by-level and left-to-right fashion at the same level. Here, the traversal is level-wise. It means that the most left child has traversed first and then the other children of the same level from left to right have traversed.
    - Conclusion:
        + Tree is a hierarchical data structure. Main uses of trees include maintaining hierarchical data, providing moderate access and insert/delete operations. Binary trees are special cases of tree where every node has at most two children.