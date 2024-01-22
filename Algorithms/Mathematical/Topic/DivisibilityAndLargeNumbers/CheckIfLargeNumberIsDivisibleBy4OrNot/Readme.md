----------------------------------------------------------------------------------

Given a number, the task is to check if a number is divisible by 4 or not. The input number may be large and it may not be possible to store even if we use long long int.

----------------------------------------------------------------------------------

Examples:  
Input : n = 1124
Output : Yes
Input  : n = 1234567589333862
Output : No
Input  : n = 363588395960667043875487
Output : No

----------------------------------------------------------------------------------

Since input number may be very large, we cannot use n % 4 to check if a number is divisible by 4 or not, especially in languages like C/C++. The idea is based on following fact:
A number is divisible by 4 if number formed by last two digits of it is divisible by 4.

----------------------------------------------------------------------------------

For example, let us consider 76952 
Number formed by last two digits = 52
Since 52 is divisible by 4, answer is YES.
How does this work? 

Let us consider 76952, we can write it as
76952 = 7*10000 + 6*1000 + 9*100 + 5*10 + 2

The proof is based on below observation:
Remainder of 10i divided by 4 is 0 if i greater 
than or equal to two. Note than 100, 1000,
... etc lead to remainder 0 when divided by 4.

So remainder of "7*10000 + 6*1000 + 9*100 + 
5*10 + 2" divided by 4 is equivalent to remainder 
of following : 
0 + 0 + 0 + 5*10 + 2 = 52
Therefore we can say that the whole number is 
divisible by 4 if 52 is divisible by 4.

----------------------------------------------------------------------------------