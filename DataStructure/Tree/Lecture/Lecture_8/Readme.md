Title: Introduction to Generic Trees (N-ary Trees)

A. Introduction
    Generic trees are a collection of nodes where each node is a data structure that consists of records and a list of references to its children(duplicate references are not allowed). Unlike the linked list, each node stores the address of multiple nodes. Every node stores address of its children and the very first node’s address will be stored in a separate pointer called root.
    
    The Generic trees are the N-ary trees which have the following properties: 
        1. Many children at every node.
        2. The number of nodes for each node is not known in advance.
    
    Disadvantages of the above representation are: 
        1. Memory Wastage – All the pointers are not required in all the cases. Hence, there is lot of memory wastage.
        2. Unknown number of children – The number of children for each node is not known in advance.

    Simple Approach: 
        1. For storing the address of children in a node we can use an array or linked list. But we will face some issues with both of them.
        2. In Linked list, we can not randomly access any child’s address. So it will be expensive.
        3. In array, we can randomly access the address of any child, but we can store only fixed number of children’s addresses in it.

    Better Approach:
        We can use Dynamic Arrays for storing the address of children. We can randomly access any child’s address and the size of the vector is also not fixed.

    Implementions:
        #include <vector> 
        class Node { 
        public: 
            int data; 
            std::vector<Node*> children; 
            Node(int data) { this->data = data; } 
        }; 

    Efficient Approach:  
        - First child / Next sibling representation
        - In the first child/next sibling representation, the steps taken are: 
        - At each node-link the children of the same parent(siblings) from left to right.
        - Remove the links from parent to all children except the first child.
        - Since we have a link between children, we do not need extra links from parents to all the children. This representation allows us to traverse all the elements by starting at the first child of the parent.

    Implementions:
        struct Node { 
            int data; 
            Node *firstChild; 
            Node *nextSibling; 
        };

B. Link for more lecture: https://www.geeksforgeeks.org/generic-treesn-array-trees/?ref=lbp  