---------------------------------------------------------------------------------------------------

Given a number, the task is to check if the number is divisible by 11 or not. The input number may be large and it may not be possible to store it even if we use long long int.
Examples: 

---------------------------------------------------------------------------------------------------

Input : n = 76945
Output : Yes
Input  : n = 1234567589333892
Output : Yes
Input  : n = 363588395960667043875487
Output : No

---------------------------------------------------------------------------------------------------

Since input number may be very large, we cannot use n % 11 to check if a number is divisible by 11 or not, especially in languages like C/C++. The idea is based on following fact.
A number is divisible by 11 if difference of following two is divisible by 11. 
    Sum of digits at odd places.
    Sum of digits at even places.

---------------------------------------------------------------------------------------------------

Illustration: 
For example, let us consider 76945 
Sum of digits at odd places  : 7 + 9 + 5
Sum of digits at even places : 6 + 4 
Difference of two sums = 21 - 10 = 11
Since difference is divisible by 11, the
number 7945 is divisible by 11.

---------------------------------------------------------------------------------------------------

How does this work?
Let us consider 7694, we can write it as 7694 = 7*1000 + 6*100 + 9*10 + 4
The proof is based on below observation:
    Remainder of 10i divided by 11 is 1 if i is even
    Remainder of 10i divided by 11 is -1 if i is odd
So the powers of 10 only result in values either 1 or -1. 
Remainder of "7*1000 + 6*100 + 9*10 + 4" divided by 11 can be written as : 7*(-1) + 6*1 + 9*(-1) + 4*1
The above expression is basically difference between sum of even digits and odd digits.

---------------------------------------------------------------------------------------------------

Time Complexity: O(n), where n is the given number.
Auxiliary Space: O(1), as we are not using any extra space.

---------------------------------------------------------------------------------------------------