# Staircase

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Staircase](https://www.hackerrank.com/challenges/staircase/problem)

## Problem Description

Staircase detail

This is a staircase of size :

```
   #
  ##
 ###
####

```

Its base and height are both equal to .  It is drawn using `#` symbols and spaces. **The last line is not preceded by any spaces.**

Write a program that prints a staircase of size .

**Function Description**

Complete the  function with the following parameter(s):

* : an integer

**Print**

Print a staircase as described above. No value should be returned. **
Note**: The last line is not preceded by spaces. All lines are right-aligned.

**Input Format**

A single integer, , denoting the size of the staircase.

**Constraints**

 .

**Sample Input**

```
6

```

**Sample Output**

```
     #
    ##
   ###
  ####
 #####
######

```

**Explanation**

The staircase is right-aligned, composed of `#` symbols and spaces, and has a height and width of .

## Examples



## Constraints



## Solution

```c
// HackerRank Problem: Staircase
// Link: https://www.hackerrank.com/challenges/staircase/problem
// Difficulty: Easy
// Language: c

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,i,j,k,l;
    scanf("%d",&a);
    
    for(i=1;i<a+1;i++)
        {
        for(k=1;k<=a-i;k++)
            {
            printf(" ");  
            }
        for(l=i;l>0;l--)
            {
            printf("#");
        }
        printf("\n");
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
