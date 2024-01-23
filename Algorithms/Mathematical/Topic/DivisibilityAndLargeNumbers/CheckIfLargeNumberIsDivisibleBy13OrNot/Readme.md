---------------------------------------------------------------------------------------------------

Given a large number, the task is to check if the number is divisible by 13 or not. 

---------------------------------------------------------------------------------------------------

Examples : 
1. Input :  637
Output : 637 is divisible by 13.
2. Input :  920
Output : 920 is not divisible by 13.
3. Input  : 83959092724
Output : 83959092724 is divisible by 13.

---------------------------------------------------------------------------------------------------

If the given number num is small, we can easily find whether it is divisible by 13 or not by doing num % 13 and checking whether the result is 0 or not. But what about very large numbers? Let’s discuss large numbers.

---------------------------------------------------------------------------------------------------

Below are some interesting facts about the divisibility of 13:
1. A number is divisible by 13 if and if the alternating sum (alternatively adding and subtracting) of blocks of three from right to left is divisible by 13. For example, 2911285 is divisible by 13 because the alternating sum of blocks of size 3 is 2 – 911 + 285 = -650 which is divisible by 13.
2. A number is divisible by 13 if and only if the number obtained by adding the last digit multiplied by 4 to the rest is also divisible by 13. 
3. For example, consider 2353. Applying above rule, we get 235 + 3*4 = 247. Again we apply the rule and get 24 + 7*4 = 52. Since 52 is divisible by 13, the given number is divisible by 13. 

---------------------------------------------------------------------------------------------------