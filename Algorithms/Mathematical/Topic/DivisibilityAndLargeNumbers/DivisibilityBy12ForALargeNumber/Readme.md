---------------------------------------------------------------------------------------------------

Given a large number, the task is to check whether the number is divisible by 12 or not.

---------------------------------------------------------------------------------------------------

Examples : 
1. Input : 12244824607284961224
Output : Yes
2. Input : 92387493287593874594898678979792
Output : No

---------------------------------------------------------------------------------------------------

Method: This is a very simple approach. if a number is divisible by 4 and 3 then the number is divisible by 12. 
Point 1. If the last two digits of the number are divisible by 4 then the number is divisible by 4.
Point 2. if the sum of all digits of a number is divided by 3 then the number is divisible by 3. 

---------------------------------------------------------------------------------------------------

Time Complexity: O(N), where N is the length of the given string.
Auxiliary Space: O(1)

---------------------------------------------------------------------------------------------------