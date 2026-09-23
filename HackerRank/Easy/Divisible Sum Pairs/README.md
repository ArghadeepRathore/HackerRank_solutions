# Divisible Sum Pairs

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Divisible Sum Pairs](https://www.hackerrank.com/challenges/divisible-sum-pairs/problem)

## Problem Description

Given an array of integers and a positive integer , determine the number of  pairs where  and  +  is divisible by .

**Example**

 **

Three pairs meet the criteria:   and .

Function Description**

Complete the *divisibleSumPairs* function in the editor below.

divisibleSumPairs has the following parameter(s):

* *int n:* the length of array

* *int ar[n]:* an array of integers

* *int k:* the integer divisor

**Returns** **
-   *int:* the number of pairs

Input Format**

The first line contains  space-separated integers,  and . **
The second line contains  space-separated integers, each a value of .

Constraints**

*

*

*

**Sample Input**

```
STDIN           Function
-----           --------
6 3             n = 6, k = 3
1 3 2 6 1 2     ar = [1, 3, 2, 6, 1, 2]

```

**Sample Output**

```
 5

```

**Explanation**

Here are the  valid pairs when :

*

*

*

*

*

## Examples



## Constraints



## Solution

```c
// HackerRank Problem: Divisible Sum Pairs
// Link: https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
// Difficulty: Easy
// Language: c

#include <stdio.h>

int divisibleSumPairs(int n, int k, int ar[])
{
    int count=0;
    for(int i=0;i<n;i++) 
    {
        for(int j=i+1;j<n;j++) 
        {
            if((ar[i]+ar[j])%k==0)
            {
                count++;
            }
        }
    }
    return count;
}
int main() 
{
    int n,k;
    scanf("%d %d",&n,&k);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int result=divisibleSumPairs(n,k,ar);
    printf("%d\n", result);
    return 0;
}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
