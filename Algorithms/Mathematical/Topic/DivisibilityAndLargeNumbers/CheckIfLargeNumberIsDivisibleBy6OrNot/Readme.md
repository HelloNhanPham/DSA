----------------------------------------------------------------------------------

Given a number, the task is to check if a number is divisible by 6 or not. The input number may be large and it may not be possible to store even if we use long long int.

----------------------------------------------------------------------------------

Examples: 
Input  : n = 2112
Output: Yes
Input : n = 1124
Output : No
Input  : n = 363588395960667043875487
Output : No

----------------------------------------------------------------------------------

Time complexity: O(1) as it is performing constant operations
Auxiliary Space: O(1) as it is using constant space for variables

----------------------------------------------------------------------------------

Since input number may be very large, we cannot use n % 6 to check if a number is divisible by 6 or not, especially in languages like C/C++. The idea is based on following fact:
    A number is divisible by 6 it's divisible by 2 and 3. 
    a)  A number is divisible by 2 if its last digit is divisible by 2.
    b)  A number is divisible by 3 if sum of digits is divisible by 3.

----------------------------------------------------------------------------------