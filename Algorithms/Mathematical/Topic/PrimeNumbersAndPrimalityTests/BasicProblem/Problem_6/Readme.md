Given a number n, print least prime factors of all numbers from 1 to n. The least prime factor of an integer n is the smallest prime number that divides the number. The least prime factor of all even numbers is 2. A prime number is its own least prime factor (as well as its own greatest prime factor).
Note: We need to print 1 for 1.

Example : 

Input : 6
Output : Least Prime factor of 1: 1
         Least Prime factor of 2: 2
         Least Prime factor of 3: 3
         Least Prime factor of 4: 2
         Least Prime factor of 5: 5
         Least Prime factor of 6: 2

We can use a variation of sieve of Eratosthenes to solve the above problem. 
Create a list of consecutive integers from 2 through n: (2, 3, 4, …, n).
Initially, let i equal 2, the smallest prime number.
Enumerate the multiples of i by counting to n from 2i in increments of i, and mark them as having least prime factor as i (if not already marked). Also mark i as least prime factor of i (i itself is a prime number).
Find the first number greater than i in the list that is not marked. If there was no such number, stop. Otherwise, let i now equal this new number (which is the next prime), and repeat from step 3.
Below is the implementation of the algorithm, where least_prime[] saves the value of the least prime factor corresponding to the respective index.

Time Complexity: O(n*log(n)) 
Auxiliary Space: O(n)