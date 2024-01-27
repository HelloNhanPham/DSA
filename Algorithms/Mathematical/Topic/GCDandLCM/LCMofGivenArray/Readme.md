---------------------------------------------------------------------------------------------------

Given an array of n numbers, find the LCM of it. 

---------------------------------------------------------------------------------------------------

Example:
1. Input : {1, 2, 8, 3}
Output : 24
2. Input : {2, 7, 3, 9, 4}
Output : 252

---------------------------------------------------------------------------------------------------

Method 1:
The idea here is to extend our relation for more than 2 numbers. Let’s say we have an array arr[] that contains n elements whose LCM needed to be calculated.
The main steps of our algorithm are: 
Initialize ans = arr[0].
Iterate over all the elements of the array i.e. from i = 1 to i = n-1 
At the ith iteration ans = LCM(arr[0], arr[1], …….., arr[i-1]). This can be done easily as LCM(arr[0], arr[1], …., arr[i]) = LCM(ans, arr[i]). Thus at i’th iteration we just have to do ans = LCM(ans, arr[i]) = ans x arr[i] / gcd(ans, arr[i])

---------------------------------------------------------------------------------------------------

Time Complexity: O(n * log(min(a, b))), where n represents the size of the given array.
Auxiliary Space: O(n*log(min(a, b))) due to recursive stack space.

---------------------------------------------------------------------------------------------------

Method 2: Using Euclidean algorithm 
The function starts by initializing the lcm variable to the first element in the array. It then iterates through the rest of the array, and for each element, it calculates the GCD of the current lcm and the element using the Euclidean algorithm. The calculated GCD is stored in the gcd variable.
Once the GCD is calculated, the LCM is updated by multiplying the current lcm with the element and dividing by the GCD. This is done using the formula LCM(a,b) = (a * b) / GCD(a,b).

1. The time complexity of the above code is O(n log n), where n is the length of the input array. This is because for each element of the array, we need to find the GCD, which has a time complexity of O(log n) using the Euclidean algorithm. Since we are iterating over n elements of the array, the overall time complexity becomes O(n log n).

2. The auxiliary space used by this algorithm is O(1), as only a constant number of variables are used throughout the algorithm, regardless of the size of the input array.

---------------------------------------------------------------------------------------------------