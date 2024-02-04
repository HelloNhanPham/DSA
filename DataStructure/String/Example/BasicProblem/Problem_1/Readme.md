Problem: String reverse or reverse a string means changing the position of each character of the given string to its opposite position from end, i.e. if a character is at position 1 then its new position will be String.length, similarly if a character is at position 2 then its new position will be String.length – 1, and so on.

Given a string, write a program to reverse the string.
Input: original_string[] = Geeks
Output: string_reversed[] = skeeG
Input: original_string[] = GeeksForGeeks
Output: string_reversed[] = skeeGroFskeeG

Table of Content:
1. Reverse String using a Loop
2. Reverse String using inbuilt method
3. Reverse String using Recursion
4. Reverse String using two pointers
5. String Reverse String using Stack

1. Reverse String using a Loop:
Initialize an empty string to store the reversed result.
Iterate through the original string in reverse order.
Append each character to the new string.
The new string is the reversed version of the original string.
Time Complexity: O(n)
Auxiliary Space: O(n) for storing the reversed string.

2. Reverse String using inbuilt method
Use the inbuilt reverse() method available for strings.
Convert the string to a list.
Call the reverse() method on the list.
Convert the list back to a string.
Time Complexity: O(n)
Auxiliary Space: O(1) in all the programming languages except Java in which it will be, O(n) (The extra space is used to store the StringBuffer string).

3. Reverse String using Recursion:
The recursive algorithm to reverse a string works by swapping the first and last characters until the middle of the string is reached. This process is performed through recursive calls, where in each call, characters at positions i and n-i-1 are swapped, and i is incremented. This continues until i reaches n/2, and the string is completely reversed.
Define a recursive function that takes a string as input.
If the string is empty or has only one character, return the string as it is the base case.
Otherwise, call the function recursively with the substring excluding the first character.
Append the first character to the result of the recursive call.
Time Complexity: O(n) where n is length of string
Auxiliary Space: O(n)

4. Reverse String using two pointers:
The idea is to use two pointers. The left pointer is placed at the beginning of the string and the right pointer is placed at the end of the string. Now swap the characters at left and right pointers, after that left pointer moves forward by 1 step and right pointer moves backward by 1 step. This operation is continued till right pointer is ahead of left pointer.
Initialize two pointers, one at the beginning and the other at the end of the string.
Swap the characters at the pointers.
Move the left pointer to the right and the right pointer to the left.
Repeat steps 2 and 3 until the pointers meet or cross each other.
Time Complexity: O(n) 
Auxiliary Space: O(1)

5. String Reverse String using Stack:
Initialize an empty stack.
Push each character of the string onto the stack.
Pop the characters from the stack and append them to a new string.
The new string is the reversed version of the original string.
Time Complexity: O(n) 
Auxiliary Space: O(n)