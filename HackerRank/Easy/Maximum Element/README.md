# Maximum Element

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Maximum Element](https://www.hackerrank.com/challenges/maximum-element/problem)

## Problem Description

You have an empty sequence, and you will be given  queries. Each query is one of these three types:

```
1 x  -Push the element x into the stack.
2    -Delete the element present at the top of the stack.
3    -Print the maximum element in the stack.

```

**Function Description**

Complete the *getMax* function in the editor below.

*getMax* has the following parameters: **
- *string operations[n]:* operations as strings

Returns** **
- *int[]:* the answers to each type 3 query

Input Format**

The first line of input contains an integer, . The next  lines each contain an above mentioned query.

**Constraints**

**Constraints** **

All queries are valid.

Sample Input**

```
STDIN   Function
-----   --------
10      operations[] size n = 10
1 97    operations = ['1 97', '2', '1 20', ....]
2
1 20
2
1 26
1 20
2
3
1 91
3

```

**Sample Output**

```
26
91

```

## Examples



## Constraints



## Solution

```c
// HackerRank Problem: Maximum Element
// Link: https://www.hackerrank.com/challenges/maximum-element/problem
// Difficulty: Easy
// Language: c

#include <stdio.h>
#include <stdlib.h>
int data[100000],top,max=0;
void push()
{
   int item;
   scanf("%d",&item);
   top++;
   data[top]=item;
   if(max < data[top])
        max = data[top];
}

void pop()
{
    int i;
    if(max == data[top])
        max=0;
    top--;
    for(i= top;i>=0;i--)
        if(max < data[i])
            max = data[i];
}
int main()
{
    int t,n,choice;
    top = -1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : push();
                     break;
            case 2:  pop();
                     break;
            case 3: printf("%d\n",max);
                    break;
        }
    }
    return 0;

}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
