# A Very Big Sum

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [A Very Big Sum](https://www.hackerrank.com/challenges/a-very-big-sum/problem)

## Problem Description

In this challenge, you need to calculate and print the sum of elements in an array, considering that some integers may be very large.

**Function Description**

Complete the  function with the following parameter(s):

* : an array of integers

**Return**

* : the sum of the array elements

**Input Format**

The first line of the input consists of an integer . **
The next line contains  space-separated integers contained in the array.

Output Format**

Return the integer sum of the elements in the array.

**Constraints** **

Sample Input**

```
STDIN                                                   Function
-----                                                   --------
5                                                       arr[] size n = 5
1000000001 1000000002 1000000003 1000000004 1000000005  arr[...]

```

**Output**

```
5000000015

```

**Note:**

The range of the 32-bit integer is .

When we add several integer values, the resulting sum might exceed the above range. You might need to use long int C/C++/Java to store such sums.

## Examples



## Constraints



## Solution

```c
// HackerRank Problem: A Very Big Sum
// Link: https://www.hackerrank.com/challenges/a-very-big-sum/problem
// Difficulty: Easy
// Language: c

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int j,k,l;
    scanf("%d",&j);
    unsigned long long int t[j],r=0;
    
    for(k=0;k<j;k++)
        {
        scanf("%lld",&t[k]);
        }
    for(k=0;k<j;k++)
        {
        r=r+t[k];
        }
    printf("%lld",r);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
