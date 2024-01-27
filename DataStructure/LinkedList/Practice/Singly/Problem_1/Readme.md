Problem: Find Length of a Linked List (Iterative and Recursive)

Write a function to count the number of nodes in a given singly linked list

Example:
Input: 2->4->1->9->5->3->6
Output: 7 

1. An iterative approach for finding the length of the linked list:
Follow the given steps to solve the problem:
Initialize count as 0 
Initialize a node pointer, current = head.
Do following while current is not NULL
current = current -> next
Increment count by 1.
Return count.
Time complexity: O(N), Where N is the size of the linked list
Auxiliary Space: O(1), As constant extra space is used.

2. A recursive approach for finding the length of the linked list:
Follow the given steps to solve the problem:
If the head is NULL, return 0.
Otherwise, return 1 + getCount(head->next).
Time Complexity: O(N), As we are traversing the linked list only once.
Auxiliary Space: O(N), Extra space is used in the recursion call stack.

3. Recursive approach for finding the length of the linked list using constant space:
To solve the problem follow the below idea:
The above recursive approach can be modified to make it a tail recursive function and thus our auxiliary space will become O(1)
Time Complexity: O(N), As we are traversing the list only once.
Auxiliary Space: O(N), In worst case the depth of recursion call stack will be N.