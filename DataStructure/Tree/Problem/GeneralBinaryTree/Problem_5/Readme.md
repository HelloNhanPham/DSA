Problem: Given a binary tree, print out all of its root-to-leaf paths one per line.

Given the roots of a tree. print out all of its root-to-leaf paths one per line.

Algorithm:
    initialize: pathlen = 0, path[1000] 
    printPathsRecur(tree, path[], pathlen)
    1) If node is not NULL then 
            a) push data to path array: 
                    path[pathlen] = node->data.
            b) increment pathlen 
                    pathlen++
    2) If node is a leaf node then print the path array.
    3) Else
            a) Call printPathsRecur for left subtree: printPathsRecur(node->left, path, pathLen)
            b) Call printPathsRecur for right subtree: printPathsRecur(node->right, path, pathLen)

    Time Complexity: O(n)
        The time complexity of the above algorithm is O(n) where n is the number of nodes in the binary tree. Since we traverse the node once, the time complexity is O(n).
    Space Complexity: O(h)
        The space complexity of the above algorithm is O(h) where h is the height of the Binary Tree. We are using the recursion stack to keep the path information so the space complexity is O(h).