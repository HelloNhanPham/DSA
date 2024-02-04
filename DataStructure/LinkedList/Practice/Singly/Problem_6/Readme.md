Problem: Finding middle element in a linked list
Given a singly linked list of N nodes.
The task is to find the middle of the linked list. For example, if the linked list is
1-> 2->3->4->5, then the middle node of the list is 3.
If there are two middle nodes(in case, when N is even), print the second middle element.
For example, if the linked list given is 1->2->3->4->5->6, then the middle node of the list is 4.

1. Example 1:
Input:
LinkedList: 1->2->3->4->5
Output: 3 
Explanation: 
Middle of linked list is 3.

2. Example 2: 
Input:
LinkedList: 2->4->6->7->5->1
Output: 7 
Explanation: 
Middle of linked list is 7.

Your Task:
The task is to complete the function getMiddle() which takes a head reference as the only argument and should return the data at the middle node of the linked list.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 5000

Slow and Fast Pointer Approach C++
APPROACH:
Take two-pointers at the head of the list.
move the slow pointer by 1 node in each iteration and the fast pointer by 2 steps in each iteration.
When the fast pointer reaches the end of the list, the slow pointer will be in the middle of the list.