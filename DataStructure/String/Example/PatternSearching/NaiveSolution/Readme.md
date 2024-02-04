Problem: Naive algorithm for Pattern Searching
Given text string with length n and a pattern with length m, the task is to prints all occurrences of pattern in text.
Note: You may assume that n > m.

Examples
Input:  text = “THIS IS A TEST TEXT”, pattern = “TEST”
Output: Pattern found at index 10
Input:  text =  “AABAACAADAABAABA”, pattern = “AABA”
Output: Pattern found at index 0, Pattern found at index 9, Pattern found at index 12.

Naive Pattern Searching algorithm: 
Slide the pattern over text one by one and check for a match. If a match is found, then slide by 1 again to check for subsequent matches. 

Time Complexity: O(N2)
Auxiliary Space: O(1)

Complexity Analysis of Naive algorithm for Pattern Searching:
Best Case: O(n)
When the pattern is found at the very beginning of the text (or very early on).
The algorithm will perform a constant number of comparisons, typically on the order of O(n) comparisons, where n is the length of the pattern.
Worst Case: O(n2)
When the pattern doesn’t appear in the text at all or appears only at the very end.
The algorithm will perform O((n-m+1)*m) comparisons, where n is the length of the text and m is the length of the pattern.
In the worst case, for each position in the text, the algorithm may need to compare the entire pattern against the text.