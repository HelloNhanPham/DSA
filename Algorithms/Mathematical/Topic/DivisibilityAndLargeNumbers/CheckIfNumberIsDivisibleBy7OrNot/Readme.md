------------------------------------------------------------------------------------

Given a number N, the task is to check if it is divisible by 7 or not.
Note: You are not allowed to use the modulo operator, floating point arithmetic is also not allowed. 

------------------------------------------------------------------------------------

Naive approach: A simple method is repeated subtraction. Following is another interesting method.
Divisibility by 7 can be checked by a recursive method. A number of the form 10a + b is divisible by 7 if and only if a – 2b is divisible by 7. In other words, subtract twice the last digit from the number formed by the remaining digits. Continue to do this until a small number. 

------------------------------------------------------------------------------------

Example: the number 371: 37 – (2×1) = 37 – 2 = 35; 3 – (2 × 5) = 3 – 10 = -7; thus, since -7 is divisible by 7, 371 is divisible by 7. 

------------------------------------------------------------------------------------

Time Complexity: O(log n)
Auxiliary Space: O(log n)

------------------------------------------------------------------------------------

How does this work? Let ‘b’ be the last digit of a number ‘n’ and let ‘a’ be the number we get when we split off ‘b’. 
The representation of the number may also be multiplied by any number relatively prime to the divisor without changing its divisibility. After observing that 7 divides 21, we can perform the following: 

10.a + b 
after multiplying by 2, this becomes  
20.a + 2.b 
and then 
21.a - a + 2.b 
Eliminating the multiple of 21 gives 
-a + 2b
and multiplying by -1 gives 
a - 2b

------------------------------------------------------------------------------------