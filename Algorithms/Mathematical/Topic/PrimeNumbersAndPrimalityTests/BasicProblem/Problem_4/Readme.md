1. Given an even number (greater than 2 ), print two prime numbers whose sum will be equal to given number. There may be several combinations possible. Print only first such pair. 
An interesting point is, a solution always exist according to Goldbach’s conjecture.

2. Examples : 
Input: n = 74
Output: 3 71
Input : n = 1024
Output: 3 1021
Input: n = 66
Output: 5 61
Input: n = 9990
Output: 17 9973

3. The idea is to find all the primes less than or equal to the given number N using Sieve of Eratosthenes. Once we have an array that tells all primes, we can traverse through this array to find pair with given sum. 