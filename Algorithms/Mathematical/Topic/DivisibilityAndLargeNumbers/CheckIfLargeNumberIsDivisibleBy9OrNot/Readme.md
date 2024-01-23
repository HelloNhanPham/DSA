------------------------------------------------------------------------------------

Given a number, the task is to find if the number is divisible by 9 or not. The input number may be large and it may not be possible to store even if we use long long int.

------------------------------------------------------------------------------------

Examples: 

Input  : n = 69354
Output : Yes

Input  : n = 234567876799333
Output : No

Input  : n = 3635883959606670431112222
Output : No

------------------------------------------------------------------------------------

Since input number may be very large, we cannot use n % 9 to check if a number is divisible by 9 or not, especially in languages like C/C++. The idea is based on following fact: 
    A number is divisible by 9 if sum of its digits is divisible by 9.

------------------------------------------------------------------------------------

Illustration:
For example n = 9432
Sum of digits = 9 + 4 + 3 + 2 = 18
Since sum is divisible by 9, answer is Yes.

------------------------------------------------------------------------------------

How does this work?  
Let us consider 1332, we can write it as
1332 = 1*1000 + 3*100 + 3*10 + 2

------------------------------------------------------------------------------------

The proof is based on below observation:
Remainder of 10i divided by 9 is 1 So powers of 10 only results in remainder 1 when divided by 9.

Remainder of "1*1000 + 3*100 + 3*10 + 2" divided by 9 can be written as : 1*1 + 3*1 + 3*1 + 2 = 9
The above expression is basically sum of all digits.

Since 9 is divisible by 9, answer is yes.

------------------------------------------------------------------------------------