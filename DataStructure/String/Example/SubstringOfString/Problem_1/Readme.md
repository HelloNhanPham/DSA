1. Given a string str and pos and len that defines the starting and the length of the subarray. The task is to generate a substring of size len starting from the index pos. 

A substring is a contiguous sequence of characters within a String.

2. Examples
a/ Input: Str =”the”, pos=1, len=2
Output:  “th”
Explanation: substrings will be: “”, “t”, “h”, “e”, “th”, “he”, “the”.
b/ Input: Str =”geeks”, pos=3, length=3
Output: “eks” 
Explanation: substrings are: “”, ” g”, “e”, “e”, “k”, “s”, “ge”, “ee”, “ek”, “ks”, “gee”, “eek”, “eks”, “geek”, “eeks”, “geeks”.

3. 
- Approach: The problem can be solved following the below idea:
Create a character array and put the characters starting from pos to the character array to generate the substring. 
- Follow the below steps to implement the idea:
Create a character array to store the substring.
Iterate from the given position for the given length to generate the substring required.
Then store each character in the character array and print the substring.
Time complexity: O(len)
Auxiliary space: O(len)

4. Using strncpy() function in C
We can also use strncpy() function in C to copy the substring from a given input string. It takes 3 parameters which are the destination string, source string along with starting index and length of the substring which we need to copy.
Syntax:
strncpy(destination_string,input_string+pos,len);
Here pos is the starting index and len is the length of the substring which we want to copy.
Time complexity: O(len)
Auxiliary space: O(len)