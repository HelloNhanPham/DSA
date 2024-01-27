Find two distinct prime numbers with given product

Given a number N (greater than 2 ). The task is to find two distinct prime numbers whose product will be equal to the given number. There may be several combinations possible. Print only first such pair. 
If it is not possible to express N as a product of two distinct primes, print “Not Possible”.

Examples: 
Input : N = 15
Output : 3, 5
3 and 5 are both primes and,
3*5 = 15
Input : N = 39
Output : 3, 13
3 and 13 are both primes and,
3*13 = 39

The idea is to find all the primes less than or equal to the given number N using Sieve of Eratosthenes. Once we have an array that tells all primes, we can traverse through this array to find a pair with a given product.

Time Complexity: O(N*log log(N))
Auxiliary Space: O(N), since N extra space has been taken.