Problem: Reverse words in a given string
Given a string, the task is to reverse the order of the words in the given string. 

Examples:
Input: s = “geeks quiz practice code” 
Output: s = “code practice quiz geeks”
Input: s = “i love programming very much” 
Output: s = “much very programming love i”

Approach:
Initially, reverse the individual words of the given string one by one, for the above example, after reversing individual words the string should be “i ekil siht margorp yrev hcum”.
Reverse the whole string from start to end to get the desired output “much very program this like i” in the above example.

Follow the below steps to solve the problem:
Run a for loop to traverse the string and create a temporary string to store the words
If the current character is a space then add the current string to the answer and empty the string
Else push the character into the string
Print the answer array in reverse order

Time complexity: O(N)
Auxiliary Space: O(N)

Note: The above code doesn’t handle the cases when the string starts with space. 