Left-Truncatable Prime
A Left-truncatable prime is a prime which in a given base (say 10) does not contain 0 and which remains prime when the leading (“left”) digit is successively removed. For example, 317 is left-truncatable prime since 317, 17 and 7 are all prime. There are total 4260 left-truncatable primes.
The task is to check whether the given number (N >0) is left-truncatable prime or not.

Examples: 
Input: 317
Output: Yes
Input: 293
Output: No
293 is not left-truncatable prime because 
numbers formed are 293, 93 and 3. Here, 293 
and 3 are prime but 93 is not prime.

The idea is to first check whether the number contains 0 as a digit or not and count number of digits in the given number N. If it contains 0, then return false otherwise generate all the primes less than or equal to the given number N using Sieve of Eratosthenes.. Once we have generated all such primes, then we check whether the number remains prime when the leading (“left”) digit is successively removed.

Time Complexity: O(N*N) 
Auxiliary Space: O(N)