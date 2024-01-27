Given a number n, write an efficient function to print all prime factors of n. For example, if the input number is 12, then the output should be “2 2 3”. And if the input number is 315, then the output should be “3 3 5 7”.

First Approach:
Following are the steps to find all prime factors.
1) While n is divisible by 2, print 2 and divide n by 2.
2) After step 1, n must be odd. Now start a loop from i = 3 to the square root of n. While i divides n, print i, and divide n by i. After i fails to divide n, increment i by 2 and continue.
3) If n is a prime number and is greater than 2, then n will not become 1 by the above two steps. So print n if it is greater than 2.
Time Complexity: O(sqrt(n))
In the worst case ( when either n or sqrt(n) is prime, for example: take n=11 or n=121 for both the cases for loop runs sqrt(n) times), the for loop runs for sqrt(n) times. The more number of times the while loop iterates on a number it reduces the original n, which also reduces the value of sqrt(n). Although the best case time complexity is O(log(n)), when the prime factors of n is only 2 and 3 or n is of the form (2^x*(3^y) where x>=0 and y>=0.
Auxiliary Space: O(1)

How does this work?
The steps 1 and 2 take care of composite numbers and step 3 takes care of prime numbers. To prove that the complete algorithm works, we need to prove that steps 1 and 2 actually take care of composite numbers. This is clear that step 1 takes care of even numbers. And after step 1, all remaining prime factors must be odd (difference of two prime factors must be at least 2), this explains why i is incremented by 2. 
Now the main part is, the loop runs till the square root of n not till n. To prove that this optimization works, let us consider the following property of composite numbers.
Every composite number has at least one prime factor less than or equal to the square root of itself.
This property can be proved using a counter statement. Let a and b be two factors of n such that a*b = n. If both are greater than ?n, then a.b > ?n, * ?n, which contradicts the expression “a * b = n”. 
In step 2 of the above algorithm, we run a loop and do the following in loop 
a) Find the least prime factor i (must be less than ?n,)
b) Remove all occurrences i from n by repeatedly dividing n by i.
c) Repeat steps a and b for divided n and i = i + 2. The steps a and b are repeated till n becomes either 1 or a prime number.