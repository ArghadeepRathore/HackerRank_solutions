# Between Two Sets

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Between Two Sets](https://www.hackerrank.com/challenges/between-two-sets/problem)

## Problem Description

There will be two arrays of integers.  Determine all integers that satisfy the following two conditions:

* The elements of the first array are all factors of the integer being considered

* The integer being considered is a factor of all elements of the second array

These numbers are referred to as being *between* the two arrays.  Determine how many such numbers exist.

**Example** **

There are two numbers between the arrays:  and .

, ,  and  for the first value.

,  and ,  for the second value.
Return .

Function Description**

Complete the *getTotalX* function in the editor below.  It should return the number of integers that are betwen the sets.

getTotalX has the following parameter(s):

* *int a[n]*: an array of integers

* *int b[m]*: an array of integers

**Returns**

* *int:* the number of integers that are between the sets

**Input Format**

The first line contains two space-separated integers,  and , the number of elements in arrays  and . **
The second line contains  distinct space-separated integers  where .

The third line contains  distinct space-separated integers  where .

Constraints**

*

*

*

**Sample Input**

```
2 3
2 4
16 32 96

```

**Sample Output**

```
3

```

**Explanation**

2 and 4 divide evenly into 4, 8, 12 and 16.

4, 8 and 16 divide evenly into 16, 32, 96.

4, 8 and 16 are the only three numbers for which each element of a is a factor and each is a factor of all elements of b.

## Examples



## Constraints



## Solution

```c
// HackerRank Problem: Between Two Sets
// Link: https://www.hackerrank.com/challenges/between-two-sets/problem
// Difficulty: Easy
// Language: c

#include <stdio.h>

int main() {
  int i, m, n;
  scanf("%d %d", &m, &n);
  int ar[m], ar2[n];
  for (i = 0; i < m; i++) {
    scanf("%d", &ar[i]);
  }
  for (i = 0; i < n; i++) {
    scanf("%d", &ar2[i]);
  }
  int br[m];
  for (i = 0; i < m; i++) {
    br[i] = ar[i];
  }
  int j, k;
  int lcm = 1;
  int c = 0;
  int large = ar[0];
  for (i = 0; i < m; i++) {
    if (ar[i] > large) {
      large = ar[i];
    }
  }
  for (i = 1; i <= large; i++) {
    c = 0;
    for (j = 0; j < m; j++) {
      if (ar[j] % i == 0) {
        c++;
      }
    }
    if (c == m) {
      lcm *= i;
      for (k = 0; k < m; k++) {
        ar[k] = ar[k] / i;
      }
    }
  }
  int hcf = lcm;
  c=0;
  for (i = 0; i < m; i++) {
    if (large % br[i] == 0) 
    {
      c++;
    }
  }
  if (c == m) {
    lcm = large;
  } else {
    for (i = 0; i < m; i++) {
      lcm *= ar[i];
    }
  }
  int small = ar2[0];
  for (i = 0; i < n - 1; i++) {
    if (ar2[i] <= ar2[i + 1]) {
      small = ar2[i];
    }
  }
  int c1 = 0;
  j = 1;
  int lcm2 = lcm;
  while (lcm2 <= small) {
    c = 0;
    for (i = 0; i < n; i++) {
      if (ar2[i] % lcm2 == 0) {
        c++;
      }
    }
    if (c == n) {
      c1++;
    }
    j++;
    lcm2 = lcm * j;
  }

  printf("%d", c1);
}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
