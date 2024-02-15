1. Introduction to Tree – Data Structure and Algorithm Tutorials
A tree data structure is a hierarchical structure that is used to represent and organize data in a way that is easy to navigate and search. It is a collection of nodes that are connected by edges and has a hierarchical relationship between the nodes. 
The topmost node of the tree is called the root, and the nodes below it are called the child nodes. Each node can have multiple child nodes, and these child nodes can also have their own child nodes, forming a recursive structure.

2. This data structure is a specialized method to organize and store data in the computer to be used more effectively. It consists of a central node, structural nodes, and sub-nodes, which are connected via edges. We can also say that tree data structure has roots, branches, and leaves connected with one another.

3. Basic Terminologies In Tree Data Structure:
- Parent Node: The node which is a predecessor of a node is called the parent node of that node. {B} is the parent node of {D, E}.
- Child Node: The node which is the immediate successor of a node is called the child node of that node. Examples: {D, E} are the child nodes of {B}.
- Root Node: The topmost node of a tree or the node which does not have any parent node is called the root node. {A} is the root node of the tree. A non-empty tree must contain exactly one root node and exactly one path from the root to all other nodes of the tree.
- Leaf Node or External Node: The nodes which do not have any child nodes are called leaf nodes. {K, L, M, N, O, P, G} are the leaf nodes of the tree.
- Ancestor of a Node: Any predecessor nodes on the path of the root to that node are called Ancestors of that node. {A,B} are the ancestor nodes of the node {E}
- Descendant: Any successor node on the path from the leaf node to that node. {E,I} are the descendants of the node {B}.
- Sibling: Children of the same parent node are called siblings. {D,E} are called siblings.
- Level of a node: The count of edges on the path from the root node to that node. The root node has level 0.
- Internal node: A node with at least one child is called Internal Node.
Neighbour of a Node: Parent or child nodes of that node are called neighbors of that node.
- Subtree: Any node of the tree along with its descendant.

4. Representation of Tree Data Structure:
A tree consists of a root, and zero or more subtrees T1, T2, … , Tk such that there is an edge from the root of the tree to the root of each subtree.

5. Representation of a Node in Tree Data Structure:
struct Node
{
   int data;
   struct Node *first_child;
   struct Node *second_child;
   struct Node *third_child;
   .
   .
   .
   struct Node *nth_child;
};

6. Types of Tree data structures
- Binary tree: In a binary tree, each node can have a maximum of two children linked to it. Some common types of binary trees include full binary trees, complete binary trees, balanced binary trees, and degenerate or pathological binary trees.
- Ternary Tree: A Ternary Tree is a tree data structure in which each node has at most three child nodes, usually distinguished as “left”, “mid” and “right”.
- N-ary Tree or Generic Tree: Generic trees are a collection of nodes where each node is a data structure that consists of records and a list of references to its children(duplicate references are not allowed). Unlike the linked list, each node stores the address of multiple nodes.

7. Basic Operation Of Tree Data Structure:
    + Create – create a tree in the data structure.
    + Insert − Inserts data in a tree.
    + Search − Searches specific data in a tree to check whether it is present or not.
    + Traversal:
        _Preorder Traversal – perform Traveling a tree in a pre-order manner in the data structure.
        _In order Traversal – perform Traveling a tree in an in-order manner.
        _Post-order Traversal –perform Traveling a tree in a post-order manner.

8. Why Tree is considered a non-linear data structure?
The data in a tree are not stored in a sequential manner i.e., they are not stored linearly. Instead, they are arranged on multiple levels or we can say it is a hierarchical structure. For this reason, the tree is considered to be a non-linear data structure.

9. Properties of Tree Data Structure:
    - Number of edges: An edge can be defined as the connection between two nodes. If a tree has N nodes then it will have (N-1) edges. There is only one path from each node to any other node of the tree.
    - Depth of a node: The depth of a node is defined as the length of the path from the root to that node. Each edge adds 1 unit of length to the path. So, it can also be defined as the number of edges in the path from the root of the tree to the node.
    - Height of a node: The height of a node can be defined as the length of the longest path from the node to a leaf node of the tree.
    - Height of the Tree: The height of a tree is the length of the longest path from the root of the tree to a leaf node of the tree.
    - Degree of a Node: The total count of subtrees attached to that node is called the degree of the node. The degree of a leaf node must be 0. The degree of a tree is the maximum degree of a node among all the nodes in the tree.    

10. Need for Tree Data Structure
    - One reason to use trees might be because you want to store information that naturally forms a hierarchy. For example, the file system on a computer: 
    - Trees (with some ordering e.g., BST) provide moderate access/search (quicker than Linked List and slower than arrays).
    - Trees provide moderate insertion/deletion (quicker than Arrays and slower than Unordered Linked Lists).
    - Like Linked Lists and unlike Arrays, Trees don’t have an upper limit on the number of nodes as nodes are linked using pointers.

11. Application of Tree Data Structure:
    - File System:  This allows for efficient navigation and organization of files.
    - Data Compression: Huffman coding is a popular technique for data compression that involves constructing a binary tree where the leaves represent characters and their frequency of occurrence. The resulting tree is used to encode the data in a way that minimizes the amount of storage required.
    - Compiler Design: In compiler design, a syntax tree is used to represent the structure of a program. 
    - Database Indexing: B-trees and other tree structures are used in database indexing to efficiently search for and retrieve data. 

12. Advantages of Tree Data Structure:
    - Tree offer Efficient Searching Depending on the type of tree, with average search times of O(log n) for balanced trees like AVL. 
    - Trees provide a hierarchical representation of data, making it easy to organize and navigate large amounts of information.
    - The recursive nature of trees makes them easy to traverse and manipulate using recursive algorithms.

13. Disadvantages of Tree Data Structure:
    - Unbalanced Trees, meaning that the height of the tree is skewed towards one side, which can lead to inefficient search times.
    - Trees demand more memory space requirements than some other data structures like arrays and linked lists, especially if the tree is very large.
    - The implementation and manipulation of trees can be complex and require a good understanding of the algorithms.