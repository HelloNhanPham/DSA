Problem: Convert characters of a string to opposite case.
Given a string, convert the characters of the string into the opposite case,i.e. if a character is the lower case then convert it into upper case and vice-versa. 

Examples
Input : geeksForgEeks
Output : GEEKSfORGeEKS
Input : hello every one
Output : HELLO EVERY ONE

ASCII values  of alphabets: A – Z = 65 to 90, a – z = 97 to 122.

Solution 1
Steps: 
Take one string of any length and calculate its length.
Scan string character by character and keep checking the index. 
If a character in an index is in lower case, then subtract 32 to convert it into upper case, else add 32 to convert it in lowercase
Print the final string.
Time Complexity: O(n)
Note: This program can alternatively be done using C++ inbuilt functions – Character.toLowerCase(char) and Character.toUpperCase(char). 