Problem: Program to count occurrence of a given character in a string

Given a string S and a character ‘c’, the task is to count the occurrence of the given character in the string.

Examples
Input : S = “geeksforgeeks” and c = ‘e’
Output : 4
Explanation: ‘e’ appears four times in str.
Input : S = “abccdefgaa” and c = ‘a’
Output : 3
Explanation: ‘a’ appears three times in str.

Solution 1: Using simple Iteration
Count occurrence of a given character in a string using simple Iteration:
Iterate through the string and during each iteration, check if the current character is equal to the given character c then increments the count variable which stores count of the occurrences of the given character c in the string.
Time Complexity: O(len), where len is the size of the string given.
Auxiliary Space: O(1)

Solution 2: Using Inbuild Functions.
The idea is to use inbuild method in different programming languages which returns the count of occurences of a character in a string.
Time Complexity: O(len), where len is the size of the string given.
Auxiliary Space: O(1)

Solution 3: Using recursion.
Use a recursive approach to count the occurrences of a given character in a string. Checks if the character at the current index matches the target character, increments the count if it does, and then makes a recursive call to check the remaining part of the string. The process continues until the end of the string is reached, and the accumulated count would be the result.
Time Complexity: O(len), where len is the size of the string given.
Auxiliary Space: O(len), where len is the size of the string given.

Extended Solution: Using Frequency Table.