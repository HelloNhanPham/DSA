Given a range L to R, the task is to find the highest occurring digit in prime numbers lie between L and R (both inclusive). If multiple digits have the same highest frequency print the largest of them. If no prime number occurs between L and R, output -1.

Examples: 
Input : L = 1 and R = 20.
Output : 1
Prime number between 1 and 20 are 2, 3, 5, 7, 11, 13, 17, 19.
1 occur maximum i.e 5 times among 0 to 9.

The idea is to start from L to R, check if the number is prime or not. If prime then increment the frequency of digits (using array) present in the prime number. To check if the number is prime or not we can use the Sieve of Eratosthenes.