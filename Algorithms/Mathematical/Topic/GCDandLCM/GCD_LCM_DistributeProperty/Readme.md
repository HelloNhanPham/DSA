---------------------------------------------------------------------------------------------------

Given three integers x, y, z, the task is to compute the value of GCD(LCM(x,y), LCM(x,z)). 
Where, GCD = Greatest Common Divisor, LCM = Least Common Multiple

---------------------------------------------------------------------------------------------------

Examples: 
1. Input: x = 15, y = 20, z = 100
Output: 60
2. Input: x = 30, y = 40, z = 400
Output: 120

---------------------------------------------------------------------------------------------------

One way to solve it is by finding GCD(x, y), and using it we find LCM(x, y). Similarly, we find LCM(x, z) and then we finally find the GCD of the obtained results.
An efficient approach can be done by the fact that the following version of distributivity holds true:
GCD(LCM (x, y), LCM (x, z)) = LCM(x, GCD(y, z))
For example, GCD(LCM(3, 4), LCM(3, 10)) = LCM(3, GCD(4, 10)) = LCM(3, 2) = 6 

---------------------------------------------------------------------------------------------------