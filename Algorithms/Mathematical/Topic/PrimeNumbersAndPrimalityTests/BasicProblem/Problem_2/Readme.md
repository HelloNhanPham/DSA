1. Given a number N, the task is to print all prime numbers less than or equal to N.

2. Examples: 
Input: 7
Output: 2, 3, 5, 7
Input: 13
Output: 2, 3, 5, 7, 11, 13 

3. Naive Approach: Iterate from 2 to N, and check for prime. If it is a prime number, print the number. 
Time Complexity: O(N * N)
Auxiliary Space: O(1)

4. A better approach is based on the fact that one of the divisors must be smaller than or equal to ?n. So we check for divisibility only till sqrt(n). 
Time Complexity: O(N3/2)
Auxiliary Space: O(1)

5. The best solution is to use Sieve of Eratosthenes. The time complexity is O(N * loglog(N))