# Small Triangles, Large Triangles

**Difficulty:** Medium  
**Topics:** N/A  
**HackerRank URL:** [Small Triangles, Large Triangles](https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem)

## Problem Description

You are given  triangles, specifically, their sides ,  and . Print them in the same style but sorted by their areas from the smallest one to the largest one. It is guaranteed that all the areas are different.

The best way to calculate a area of a triangle with sides ,  and  is Heron's formula:

 where .

**Input Format**

The first line of each test file contains a single integer .  lines follow with three space-separated integers, ,  and .

**Constraints**

*

*

* , and

**Output Format**

Print exactly  lines. On each line print  space-separated integers, the ,  and  of the corresponding triangle.

**Sample Input 0**

```
3
7 24 25
5 12 13
3 4 5

```

**Sample Output 0**

```
3 4 5
5 12 13
7 24 25

```

**Explanation 0**

The area of the first triangle is . The area of the second triangle is . The area of the third triangle is . So the sorted order is the reverse one.

## Examples



## Constraints



## Solution

```c
// HackerRank Problem: Small Triangles, Large Triangles
// Link: https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem
// Difficulty: Medium
// Language: c


double area(triangle tr) {
    double p = (tr.a + tr.b + tr.c) / 2.0;
    return sqrt(p * (p - tr.a) * (p - tr.b) * (p - tr.c));
}

int compare(const void *a, const void *b) {
    triangle *t1 = (triangle*) a;
    triangle *t2 = (triangle*) b;
    double area1 = area(*t1);
    double area2 = area(*t2);
    if (area1 > area2) {
        return 1;
    } else if (area1 < area2) {
        return -1;
    } else {
        return 0;
    }
}

void sort_by_area(triangle* tr, int n) {
    qsort(tr, n, sizeof(triangle), compare);
}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
