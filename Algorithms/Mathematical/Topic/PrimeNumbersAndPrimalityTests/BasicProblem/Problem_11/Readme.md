Problem: Super Prime
Super-prime numbers (also known as higher order primes) are the subsequence of prime numbers that occupy prime-numbered positions within the sequence of all prime numbers. First few Super-Primes are 3, 5, 11 and 17. 
The task is to print all the Super-Primes less than or equal to the given positive integer N.

Examples: 
Input: 7
Output: 3 5 
3 is super prime because it appears at second
position in list of primes (2, 3, 5, 7, 11, 13, 
17, 19, 23, ...) and 2 is also prime. Similarly
5 appears at third position and 3 is a prime.
Input: 17
Output: 3 5 11 17

The idea is to generate all the primes less than or equal to the given number N using Sieve of Eratosthenes. Once we have generated all such primes, we iterate through all numbers and store it in the array. Once we have stored all the primes in the array, we iterate through the array and print all prime number which occupies prime number position in the array. 

Time complexity : – O(n*log(log(n)))
Auxiliary Space:- O(N)