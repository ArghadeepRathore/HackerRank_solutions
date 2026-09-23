# Grading Students

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Grading Students](https://www.hackerrank.com/challenges/grading/problem)

## Problem Description

HackerLand University has the following grading policy:

* Every student receives a  in the inclusive range from  to .

* Any  less than  is a failing grade.

Sam is a professor at the university and likes to round each student's  according to these rules:

* If the difference between the  and the next multiple of  is less than , round  up to the next multiple of .

* If the value of  is less than , no rounding occurs as the result will still be a failing grade.

**Examples**

*  round to  (85 - 84 is less than 3)

*  do not round (result is less than 38)

*  do not round (60 - 57 is 3 or higher)

Given the initial value of  for each of Sam's  students, write code to automate the rounding process.

**Function Description**

Complete the function  with the following parameter(s):

* : the grades before rounding

**Returns**

* : the grades after rounding

**Input Format**

The first line contains a single integer, , the number of students. **
Each line  of the  subsequent lines contains a single integer, .

Constraints**

*

*

**Sample Input 0**

```
4
73
67
38
33

```

**Sample Output 0**

```
75
67
40
33

```

**Explanation 0**

![image](https://s3.amazonaws.com/hr-challenge-images/0/1484768684-54439977a1-curving2.png)

* Student  received a , and the next multiple of  from  is . Since , the student's grade is rounded to .

* Student  received a , and the next multiple of  from  is . Since , the grade will not be modified and the student's final grade is .

* Student  received a , and the next multiple of  from  is . Since , the student's grade will be rounded to .

* Student  received a grade below , so the grade will not be modified and the student's final grade is .

## Examples



## Constraints



## Solution

```c
// HackerRank Problem: Grading Students
// Link: https://www.hackerrank.com/challenges/grading/problem
// Difficulty: Easy
// Language: c

#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n],remain;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        remain=arr[i]%5;
        if(arr[i]>=38){
            if(arr[i]%5>2){
              arr[i]=arr[i]+5-remain;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
