---------------------------------------------------------------------------------------------------

Given a positive integer n, print first k digits after point in value of 1/n. Your program should avoid overflow and floating point arithmetic.

---------------------------------------------------------------------------------------------------

Examples : 
Input:   n = 3, k = 3
Output:  333
Input:   n = 50, k = 4
Output:  0200

---------------------------------------------------------------------------------------------------

We strongly recommend to minimize the browser and try this yourself first.
Let us consider an example n = 7, k = 3. The first digit of 1/7 is ‘1’, it can be obtained by doing integer value of 10/7. Remainder of 10/7 is 3. Next digit is 4 which can be obtained by taking integer value of 30/7. Remainder of 30/7 is 2. Next digits is 2 which can be obtained by taking integer value of 20/7 

---------------------------------------------------------------------------------------------------