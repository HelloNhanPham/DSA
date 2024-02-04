Problem: Number of substrings of one string present in other.
Suppose we are given a string s1, we need to the find total number of substring(including multiple occurrences of the same substring) of s1 which are present in string s2. 

Examples: 
Input : s1 = aab
        s2 = aaaab
Output :6
Substrings of s1 are ["a", "a", "b", "aa", 
"ab", "aab"]. These all are present in s2. 
Hence, answer is 6.
Input :s1 = abcd
       s2 = swalencud
Output :3 

The idea is to consider all substrings of s1 and check if it present in s2.