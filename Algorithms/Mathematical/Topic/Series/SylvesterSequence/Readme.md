In number system, Sylvester’s sequence is an integer sequence in which each member of the sequence is the product of the previous members, plus one. Given a positive integer N. The task is to print the first N member of the sequence. 
Since numbers can be very big, use %10^9 + 7.

Examples: 
Input : N = 6
Output : 2 3 7 43 1807 3263443
Input : N = 2
Output : 2 3

The idea is to run a loop and take two variables and initialise them as 1 and 2, one to store the product till now and other to store the current number which is nothing but the first number + 1 and for each step multiply both using arithmetic modular operation i.e (a + b)%N = (a%N + b%N)%N where N is a modular number.

Time complexity : O(n) 
Auxiliary Space : O(1)