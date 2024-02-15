Title: Interval Tree

- Consider a situation where we have a set of intervals and we need following operations to be implemented efficiently. 
    1) Add an interval 
    2) Remove an interval 
    3) Given an interval x, find if x overlaps with any of the existing intervals.

- Interval Tree: The idea is to augment a self-balancing Binary Search Tree (BST) like Red Black Tree, AVL Tree, etc to maintain set of intervals so that all operations can be done in O(Logn) time. 

- Every node of Interval Tree stores following information.
    a) i: An interval which is represented as a pair [low, high] 
    b) max: Maximum high value in subtree rooted with this node.

- The low value of an interval is used as key to maintain order in BST. The insert and delete operations are same as insert and delete in self-balancing BST used.

- The main operation is to search for an overlapping interval. Following is algorithm for searching an overlapping interval x in an Interval tree rooted with root. 

- Interval overlappingIntervalSearch(root, x)
    1) If x overlaps with root's interval, return the root's interval.
    2) If left child of root is not empty and the max  in left child is greater than x's low value, recur for left child
    3) Else recur for right child.

How does the above algorithm work? 
    - Let the interval to be searched be x. We need to prove this in for following two cases.
    - Case 1: When we go to right subtree, one of the following must be true. 
        a) There is an overlap in right subtree: This is fine as we need to return one overlapping interval. 
        b) There is no overlap in either subtree: We go to right subtree only when either left is NULL or maximum value in left is smaller than x.low. So the interval cannot be present in left subtree.
    - Case 2: When we go to left subtree, one of the following must be true. 
        a) There is an overlap in left subtree: This is fine as we need to return one overlapping interval. 
        b) There is no overlap in either subtree: This is the most important part. We need to consider following facts. 
            … We went to left subtree because x.low <= max in left subtree 
            …. max in left subtree is a high of one of the intervals let us say [a, max] in left subtree. 
            …. Since x doesn’t overlap with any node in left subtree x.high must be smaller than ‘a‘. 
            …. All nodes in BST are ordered by low value, so all nodes in right subtree must have low value greater than ‘a‘. 
            …. From above two facts, we can say all intervals in right subtree have low value greater than x.high. So x cannot overlap with any interval in right subtree.
        
Implementation of Interval Tree:
    struct Interval
    {
        int low, high;
    };
    struct ITNode
    {
        Interval *i;  // 'i' could also be a normal variable
        int max;
        ITNode *left, *right;
    };
    ITNode * newNode(Interval i)
    {
        ITNode *temp = new ITNode;
        temp->i = new Interval(i);
        temp->max = i.high;
        temp->left = temp->right = NULL;
        return temp;
    };
    ITNode *insert(ITNode *root, Interval i)
    {
        // Base case: Tree is empty, new node becomes root
        if (root == NULL)
            return newNode(i);
    
        // Get low value of interval at root
        int l = root->i->low;
    
        // If root's low value is smaller, then new interval goes to
        // left subtree
        if (i.low < l)
            root->left = insert(root->left, i);
    
        // Else, new node goes to right subtree.
        else
            root->right = insert(root->right, i);
    
        // Update the max value of this ancestor if needed
        if (root->max < i.high)
            root->max = i.high;
    
        return root;
    }
    bool doOVerlap(Interval i1, Interval i2)
    {
        if (i1.low <= i2.high && i2.low <= i1.high)
            return true;
        return false;
    }
    Interval *overlapSearch(ITNode *root, Interval i)
    {
        // Base Case, tree is empty
        if (root == NULL) return NULL;
    
        // If given interval overlaps with root
        if (doOVerlap(*(root->i), i))
            return root->i;
    
        // If left child of root is present and max of left child is
        // greater than or equal to given interval, then i may
        // overlap with an interval is left subtree
        if (root->left != NULL && root->left->max >= i.low)
            return overlapSearch(root->left, i);
    
        // Else interval can only overlap with right subtree
        return overlapSearch(root->right, i);
    }
    void inorder(ITNode *root)
    {
        if (root == NULL) return;
    
        inorder(root->left);
    
        cout << "[" << root->i->low << ", " << root->i->high << "]"
            << " max = " << root->max << endl;
    
        inorder(root->right);
    }

    Time complexity of above code: O(n*h) i.e. O(n^2) in worst case as tree can be skewed.

    If Interval Tree is made self-balancing like AVL Tree, then time complexity reduces to O(nlogn).

Applications of Interval Tree: 
    - Interval tree is mainly a geometric data structure and often used for windowing queries, for instance, to find all roads on a computerized map inside a rectangular viewport, or to find all visible elements inside a three-dimensional scene (Source Wiki).
    - Interval Tree vs Segment Tree .

Both segment and interval trees store intervals. Segment tree is mainly optimized for queries for a given point, and interval trees are mainly optimized for overlapping queries for a given interval.

Operations can be perform on the interval tree are:
Interval trees are a type of data structure used for organizing and searching intervals (i.e., ranges of values). The following are some of the operations that can be performed on an interval tree:
    - Insertion: Add a new interval to the tree.
    - Deletion: Remove an interval from the tree.
    - Search: Find all intervals that overlap with a given interval.
    - Query: Find the interval in the tree that contains a given point.
    - Range query: Find all intervals that overlap with a given range.
    - Merge: Combine two or more interval trees into a single tree.
    - Split: Divide a tree into two or more smaller trees based on a given interval.
    - Balancing: Maintain the balance of the tree to ensure its performance is optimized.
    - Traversal: Visit all intervals in the tree in a specific order, such as in-order, pre-order, or post-order.

In addition to these basic operations, interval trees can be extended to support more advanced operations, such as searching for intervals with a specific length, finding the closest intervals to a given point, and more. The choice of operations depends on the specific use case and requirements of the application.

Algorithmic steps to implement the above operations:
    - Insertion:
        + Create a new node for the interval to be inserted.
        + Start from the root of the tree and compare the new interval with the intervals stored in each node.
        + If the new interval overlaps with the interval stored in the current node, go to the left child.
        + If the new interval doesn’t overlap with the interval stored in the current node, go to the right child.
        + Repeat this process until reaching a leaf node, then add the new node as a child of the leaf node.
    - Deletion:
        + Start from the root of the tree and find the node containing the interval to be deleted.
        + If the node to be deleted is a leaf node, simply remove it.
        + If the node to be deleted has one child, replace it with the child.
        + If the node to be deleted has two children, find the minimum interval in its right subtree, replace the interval in the node with the minimum interval, and then remove the minimum interval from the right subtree.     
    - Search:
        + Start from the root of the tree and compare the interval to search with the intervals stored in each node.
        + If the interval to search overlaps with the interval stored in the current node, add it to the result set and go to both the left and right children.
        + If the interval to search doesn’t overlap with the interval stored in the current node, go to the child that could contain overlapping intervals.
        + Repeat this process until reaching a leaf node, then return the result set.