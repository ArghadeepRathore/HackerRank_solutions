# Permutations of Strings

**Difficulty:** Medium  
**Topics:** N/A  
**HackerRank URL:** [Permutations of Strings](https://www.hackerrank.com/challenges/permutations-of-strings/problem)

## Problem Description

Strings are usually ordered in lexicographical order. That means they are ordered by comparing their leftmost different characters. For example,  because . Also  because . If one string is an exact prefix of the other it is lexicographically smaller, e.g., .

Given an array of strings sorted in lexicographical order, print all of its permutations in strict lexicographical order.  If two permutations look the same, only print one of them.  See the 'note' below for an example.

Complete the function `next_permutation` which generates the permutations in the described order.

For example, .  The six permutations in correct order are:

```
ab bc cd
ab cd bc
bc ab cd
bc cd ab
cd ab bc
cd bc ab

```

**Note:** There may be two or more of the same string as elements of . **
For example, .  Only one instance of a permutation where all elements match should be printed.  In other words, if , then print either  or  but not both.

A three element array having three distinct elements has six permutations as shown above.  In this case, there are three matching pairs of permutations where  and  are switched.  We only print the three visibly unique permutations:

```
ab ab bc
ab bc ab
bc ab ab

```

Input Format**

The first line of each test file contains a single integer , the length of the string array .

Each of the next  lines contains a string .

**Constraints**

*

*

*  contains only lowercase English letters.

**Output Format**

Print each permutation as a list of space-separated strings on a single line.

**Sample Input 0**

```
2
ab
cd

```

**Sample Output 0**

```
ab cd
cd ab

```

**Sample Input 1**

```
3
a
bc
bc

```

**Sample Output 1**

```
a bc bc
bc a bc
bc bc a

```

**Explanation 1**

This is similar to the **note** above.  Only three of the six permutations are printed to avoid redundancy in output.

## Examples



## Constraints



## Solution

```c
// HackerRank Problem: Permutations of Strings
// Link: https://www.hackerrank.com/challenges/permutations-of-strings/problem
// Difficulty: Medium
// Language: c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{

    int k = -1;
    for (int i = 0; i < n-1; i++) {
        if (strcmp(s[i], s[i+1]) < 0)
            k = i;
    }
    if (k == -1) return 0; 

    int l = -1;
    for (int i = k+1; i < n; i++) {
        if (strcmp(s[k], s[i]) < 0)
            l = i;
    }

    char *tmp = s[k];
    s[k] = s[l];
    s[l] = tmp;

    int i = k+1, j = n-1;
    while (i < j) {
        tmp = s[i];
        s[i++] = s[j];
        s[j--] = tmp;
    }

    return 1; 
}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
