# Birthday Cake Candles

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Birthday Cake Candles](https://www.hackerrank.com/challenges/birthday-cake-candles/problem)

## Problem Description

You are in charge of the cake for a child's birthday. It will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. Your task is to count how many candles are the tallest.

**Example**

The tallest candles are `4` units high. There are `2` candles with this height, so the function should return `2`.

**Function Description**

Complete the function  with the following parameter(s):

* : the candle heights

**Returns**

* : the number of candles that are tallest

**Input Format**

The first line contains a single integer, , the size of . **
The second line contains  space-separated integers, where each integer  describes the height of .

Constraints**

*

*

**Sample Input 0**

```
4
3 2 1 3

```

**Sample Output 0**

```
2

```

**Explanation 0**

Candle heights are .  The tallest candles are  units, and there are  of them.

## Examples



## Constraints



## Solution

```c
// HackerRank Problem: Birthday Cake Candles
// Link: https://www.hackerrank.com/challenges/birthday-cake-candles/problem
// Difficulty: Easy
// Language: c

#include<stdio.h>
int main()
{
    int i;
    int n;
    int max=0;
    scanf("%d",&n);

    int a[n];
    int count=0;

    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
            max=a[i];
    }
    for(i=1; i<=n; i++)
        if(a[i]==max)
            count++;

    printf("%d\n",count);
    return 0;
}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
