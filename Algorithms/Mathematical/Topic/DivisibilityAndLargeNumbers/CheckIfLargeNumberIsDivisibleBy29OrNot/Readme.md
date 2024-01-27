---------------------------------------------------------------------------------------------------

Given a large number n, find if the number is divisible by 29.

---------------------------------------------------------------------------------------------------

Examples : 
Input : 363927598
Output : No
Input : 292929002929
Output : Yes

---------------------------------------------------------------------------------------------------

A quick solution to check if a number is divisible by 29 or not is to add 3 times of last digit to rest number and repeat this process until number comes 2 digit. The given number is divisible by 29 if the obtained two digit number is divisible by 29.
Number is 348, 
Three times of last digit + Rest of the number = 8*3 + 34 = 58
Since 58 is divisible by 29, 348 is also divisible by 29. 

---------------------------------------------------------------------------------------------------

Time Complexity: O(n) where n is given number.
Space Complexity: O(1) as we are not using any extra space.

---------------------------------------------------------------------------------------------------