Title: 2-3-4 Tree

What is 2-3-4 Tree?
    - A 2-3-4 tree is a self-balancing tree. The number represents the number of children each node can have. Any internal node can have either two, three, or four child nodes. It is also called a 2-4 tree.
    - Note: It is a B-tree of degree four and all leaf nodes at the same level.

Properties of a 2-3-4 Tree:
    - A 2-node has one data element and if it is an internal node, then it has two child nodes.
    - A 3-node has two data elements and if this is an internal node, it has three child nodes.
    - A 4-node has three data elements and if it is an internal node, it has four child nodes.
    - The elements in each node should be sorted from smallest to greatest.
    - 2-3-4 tree is a perfectly balanced tree i.e., in this all leaf nodes are at the same level.
    - The type of any node is decided based on the structure of the tree (the structure gets decided such that the tree is always a perfectly balanced tree).

Structure of a node in 2-3-4 Tree:
    - Each node can have either 2, 3, or 4 children each of which holds 1, 2, or 3 data elements respectively. The data elements determine the range of the elements that will lie in which segment.

Operations in a 2-3-4 tree:
    - There are three basic operations that are performed in a 2-3-4 tree. The operations are:
        + Insertion of a node
        + Searching a value
        + Deletion of a node

Insertion in a 2-3-4 Tree:
    - In insertion operation, a node is inserted in the proper location in the tree. The insertion operation is always performed in a leaf node. If there are empty spaces in the internal nodes also, still we do not use them for insertion. The insertion operation is implemented by following the below steps:
    - The task is to search for the suitable leaf node where the value should be inserted. In this process whenever we get a 4 node we split that such that we do not need to trace back from the leaf to the root.
        + If the current node (say temp) is a 4 node that node is split. The following is the way used for splitting a node:
        + Erase the mid-value (say X) of the node and store it.
        Now split the remaining 3 node into two 2 nodes.
        + If the temp was the root of the tree, then create another root (a 2 node) with the value X which have the newly split nodes as its child.
        + Otherwise, add the value X accordingly in the parent node. (As we are always splitting the 4 nodes while moving from top to bottom, it is guaranteed that there will always be a space available in the parent).
        + Now arrange those two 2 nodes accordingly with the parent node.
        + Find the child whose interval contains the value which is being inserted in the tree.
        + If the child is a leaf node then insert the value. Otherwise, descend to the child and repeat from step 1.

Illustration:
    - Follow the illustration for a better understanding.
    - Say we have to insert the following numbers in the tree:
        {10, 20, 30, 40, 50, 60}
    - Insert 10:
        => As there is nothing currently, insert 10 in a new root.
        => The root is a 2 node.
    - Insert 20:
        => Insert 20 in the root (which is also the leaf) in a sorted manner.
        => The root is now a 3 node.
    - Insert 30:
        => Insert 30 in the root (which is also the leaf) in a sorted manner.
        => The root is now a 4 node.
    - Insert 40:
        => Now the root is a 4 node. So this need to be splitted.
        => So the new root will be 20. The two child will be 10 and 30.
        => Now, add 40 with the node containing 30.
    - Insert 50:
        => The node 50 needs to be inserted to the right of 20.
        => Is is added with the node having values 30 and 40.
        => This leaf now becomes a 4 node.
    - Insert 60:
        => While searching for path, we will encounter the node with values 30, 40, 50.
        => Split this node. Add 40 to the parent and arrange the other two nodes accordingly.
        => Now insert 60 in the node with value 50.

Searching in a 2-3-4 Tree:
    - The searching operation is similar to a binary search tree. Follow the below method for searching anelements:
        + Start searching from the root of the tree.
        + If the value is present in that node, then the element is found.
        + Otherwise, find the suitable interval in which the value is based on the node structure (i.e., it is 2 node, 3 node,s or 4 nodes).
        + Move to that child and continue from step 1.
        + If a leaf node is reached and the value is still not found then that value does not exist in the tree.

Deletion of a node from 2-3-4 Tree
    - Here also the deletion operation is performed always on the leaf. The deletion is performed in the following way:
        + Search the node whose value needs to be deleted.
        + If the node is a leaf node then remove the required value from that node and decrease the data elements by 1.
        + If the node is not a leaf node then:
            ~ Find the successor of that node. A successor of a node is the smallest element among the ones which are greater than it or the largest element among the ones that are smaller than it.
            ~ Swap the successor with the current node and delete that node in the leaf.
            ~ But it may cause an issue of underflow if the leaf node is a 2 node. To avoid this we perform the following adjustments on 2 nodes encountered along the path to reach the node to be removed while moving from top to bottom.
        + But it may cause an issue of underflow if the leaf node is a 2 node. To avoid this we perform the following adjustments on 2 nodes encountered along the path to reach the node to be removed while moving from top to bottom.
    - Case – 1: If either of the siblings of the current node is a 3 or 4 node.
        + Perform a rotation with that sibling.
        + The key having the closest value to this node moves up to the parent that overlooks the current node and the parent is added to the current node to make it a 3 node.
        + The node that was the originally rotated sibling’s child is now the child of the current node.
    - Case – 2: If the parent is a 2 node and the sibling is also a 2 node. In this particular case the parent is root. So merge the three 2 nodes to form a 4 node and remove the required value.
    - Case – 3: If the siblings are 2 nodes but the parent is a 3 node or 4 nodes:
        + The siblings (that are 2 nodes) and the parent key overlooking the siblings are merged to form a 4 node.
        + The child of the siblings is brought to this node.

Complexity Analysis of 2-3-4 trees:
    - Searching, insertion, and deletion all take O(logN) time complexity in 2-3-4 trees. Since the 2-3-4 is always balanced. By repeating inserting to initialize the 2-3-4 tree, we may say the time cost of init is O(n*log(n)). 
    - Height: In the worst case in 2-3-4 trees the height is logN and in the best case the height is 1/2 * logN (It is the condition when all nodes are 4 nodes)

Applications
    - Building a B-tree to represent a big existing collection of data and then slowly updating it using conventional B-tree operations is commonly beneficial in applications. In this scenario, the most efficient method of constructing the initial B-tree is to produce the initial set of leaf nodes straight from the input, then build the internal nodes from these. Bulkloading is the term for this method of B-tree construction. Every leaf, except the last, has an extra element that will be utilized to construct the internal nodes.