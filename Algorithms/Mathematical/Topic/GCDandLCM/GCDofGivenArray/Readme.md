---------------------------------------------------------------------------------------------------

Given an array of numbers, find GCD of the array elements. In a previous post we find GCD of two number.

---------------------------------------------------------------------------------------------------

Examples:
1. Input  : arr[] = {1, 2, 3}
Output : 1
2. Input  : arr[] = {2, 4, 6, 8}
Output : 2

---------------------------------------------------------------------------------------------------

The GCD of three or more numbers equals the product of the prime factors common to all the numbers, but it can also be calculated by repeatedly taking the GCDs of pairs of numbers. 

---------------------------------------------------------------------------------------------------

gcd(a, b, c) = gcd(a, gcd(b, c)) = gcd(gcd(a, b), c) = gcd(gcd(a, c), b)
For an array of elements, we do the following. We will also check for the result if the result at any step becomes 1 we will just return the 1 as gcd(1,x)=1.
    result = arr[0]
    For i = 1 to n-1
        result = GCD(result, arr[i])

---------------------------------------------------------------------------------------------------

Time Complexity: O(N * log(N)), where N is the largest element of the array
Auxiliary Space: O(1)

---------------------------------------------------------------------------------------------------