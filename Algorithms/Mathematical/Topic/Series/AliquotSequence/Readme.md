---------------------------------------------------------------------------------------------------

Given a number n, the task is to print its Aliquot Sequence. Aliquot Sequence of a number starts with itself, remaining terms of the sequence are sum of proper divisors of immediate previous term. For example, Aliquot Sequence for 10 is 10, 8, 7, 1, 0. The sequence may repeat. For example, for 6, we have an infinite sequence of all 6s. In such cases we print the repeating number and stop.

---------------------------------------------------------------------------------------------------

Examples:
Input:  n = 10
Output: 10 8 7 1 0
Sum of proper divisors of 10 is  5 + 2 + 1 = 8.
Sum of proper divisors of 8 is 4 + 2 + 1 = 7.
Sum of proper divisors of 7 is 1
Sum of proper divisors of 1 is 0
Note that there is no proper divisor of 1.

Input  : n = 6
Output : 6 
         Repeats with 6

Input : n = 12
Output : 12 16 15 9 4 3 1 0

---------------------------------------------------------------------------------------------------

Important Points:
Numbers which have repeating Aliquot sequence of length 1 are called Perfect Numbers. For example 6, sum of its proper divisors is 6.
Numbers which have repeating Aliquot sequence of length 2 are called Amicable numbers. For example 220 is a Amicable Number.
Numbers which have repeating Aliquot sequence of length 3 are called sociable number.
It is conjectured that every aliquot sequence ends in one of the following ways
with a prime number which in turn ends with 1 and then 0.
a perfect number
a set of amicable or sociable numbers.

---------------------------------------------------------------------------------------------------

The solution mainly lies in the calculation of sum of all the proper divisors of the previous term.

If we observe carefully, the divisors of the number n are present in pairs. For example if n = 100, then all the pairs of divisors are: (1,100), (2,50), (4,25), (5,20), (10,10)
Using this fact efficiently compute divisors. While checking divisors we will have to be careful if there are two equal divisors as in case of (10, 10).
In such case we will take only one of them in calculation of sum. This sum will contain sum of all the possible divisors so we have to subtract the number n from the sum of all divisors to get the sum of proper divisors.
We can generate the sequence by first printing the number n and then calculating the next terms using sum of proper divisors. When we compute next term, we check if we have already seen this term or not. If the term appears again, we have repeating sequence. We print the same and break the loop. 

---------------------------------------------------------------------------------------------------