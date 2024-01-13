In this practice, the main purpose is counting the occurrents of a number in one sorted array.
So there are more than 1 solutions to solve this problem.

1/ In the first solution, we will use two nested loop, this is the basic solutions (one of brute forces algorithms), so that, this solution take O(n^2) => The program run low if there are many elements in the array and with the elements exist at the end of the array.

2/ The second solution is better than the first, I will use the binary searching, I will find the index(*) of element we need to count, later I traversal the all two sides start index from index(*) => So that I can calculate the number of occurrences and if index(*) = -1 (The occurrences of this number is 0).
- The main program in the Main.cpp