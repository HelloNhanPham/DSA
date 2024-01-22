----------------------------------------------------------------------------------

Given a number, the task is that we divide number by 3. The input number may be large and it may not be possible to store even if we use long long int.
Examples: 

----------------------------------------------------------------------------------

Input  : n = 769452
Output : Yes
Input  : n = 123456758933312
Output : No
Input  : n = 3635883959606670431112222
Output : Yes

----------------------------------------------------------------------------------

Since input number may be very large, we cannot use n % 3 to check if a number is divisible by 3 or not, especially in languages like C/C++. The idea is based on following fact.

A number is divisible by 3 if sum of its digits is divisible by 3.

----------------------------------------------------------------------------------

For example n = 1332
Sum of digits = 1 + 3 + 3 + 2 = 9
Since sum is divisible by 3,
answer is Yes.
How does this work? 

Let us consider 1332, we can write it as
1332 = 1*1000 + 3*100 + 3*10 + 2
The proof is based on below observation:
Remainder of 10i divided by 3 is 1
So powers of 10 only result in value 1.
Remainder of "1*1000 + 3*100 + 3*10 + 2"
divided by 3 can be written as : 
1*1 + 3*1 + 3*1 + 2 = 9
The above expression is basically sum of
all digits.
Since 9 is divisible by 3, answer is yes.

----------------------------------------------------------------------------------