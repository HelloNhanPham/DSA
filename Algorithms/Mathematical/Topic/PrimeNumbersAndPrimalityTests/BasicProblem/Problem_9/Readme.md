Given a number, find the numbers (smaller than or equal to n) which are both Fibonacci and prime.

Examples: 
Input : n = 40
Output: 2 3 5 13
Explanation :
Here, range(upper limit) = 40
Fibonacci series upto n is, 1, 
1, 2, 3, 5, 8, 13, 21, 34.
Prime numbers in above series = 2, 3, 5, 13.
Input : n = 100
Output: 2 3 5 13 89
Explanation :
Here, range(upper limit) = 40
Fibonacci series upto n are 1, 1, 2, 
3, 5, 8, 13, 21, 34, 55, 89.
Prime numbers in Fibonacci upto n : 2, 3, 
5, 13, 89.

Solution:
A simple solution is to iterate generate all fibonacci numbers smaller than or equal to n. For every Fibonacci number, check if it is prime or not. If prime, then print it.
An efficient solution is to use Sieve to generate all Prime numbers up to n. After we have generated prime numbers, we can quickly check if a prime is Fibonacci or not by using the property that a number is Fibonacci if it is of the form 5i2 + 4 or in the form 5i2 – 4. Refer this for details.