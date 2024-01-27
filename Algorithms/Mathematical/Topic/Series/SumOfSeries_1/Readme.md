Given a series 12 + 32 + 52 + 72 + . . . + (2*n – 1)2, find sum of the series.
Examples: 

Input : n = 4
Output : 84
Explanation : 
sum = 12 + 32 + 52 + 72
    = 1 + 9 + 25 + 49
    = 84

Input : n = 10 
Output : 1330
Explanation :
sum = 12 + 32 + 52 + 72 + 92 + 112 + 132 + 152 + 172 + 192
    = 1 + 9 + 24 + 49 + . . . + 361
    = 1330

Another approach : Using formula to find sum of series : 

    12 + 32 + 52 + 
     72 + . . . + (2*n - 1)2 
      = (n * (2 * n - 1) * (2 * n + 1)) / 3.


Please refer sum of squares of even and odd numbers for proof.

Time Complexity: O(1)

Auxiliary space: O(1) since using constant variables