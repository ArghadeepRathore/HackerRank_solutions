# Mini-Max Sum

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Mini-Max Sum](https://www.hackerrank.com/challenges/mini-max-sum/problem)

## Problem Description

Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

**Example** **

The minimum sum is  and the maximum sum is .  The function prints

```
16 24

```

Function Description**

Complete the  function with the following parameter(s):

* : an array of  integers

**Print**

Print two space-separated integers on one line: the minimum sum and the maximum sum of  of  elements.No value should be returned.

**Note** For some languages, like C, C++, and Java, the sums may require that you use a long integer due to their size.

**Input Format**

A single line of five space-separated integers.

**Constraints**

**Sample Input**

```
1 2 3 4 5

```

**Sample Output**

```
10 14

```

**Explanation**

The numbers are , , , , and . Calculate the following sums using four of the five integers:

* Sum everything except , the sum is .

* Sum everything except , the sum is .

* Sum everything except , the sum is .

* Sum everything except , the sum is .

* Sum everything except , the sum is .

**Hints:** Beware of integer overflow! Use a 64-bit integer to store the sums.

Need help to get started? Try the [Solve Me First](https://www.hackerrank.com/challenges/solve-me-first) problem.

## Examples



## Constraints



## Solution

```c
// HackerRank Problem: Mini-Max Sum
// Link: https://www.hackerrank.com/challenges/mini-max-sum/problem
// Difficulty: Easy
// Language: c

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the miniMaxSum function below.
void miniMaxSum(int arr_count, int* arr) {
    long sum = *arr;
    int min = *arr;
    int max = *arr;
    for(int i = 1; i < arr_count; i++){
        sum += *(arr + i);
        if(*(arr + i) > max){
            max = *(arr + i);
        }
        if(*(arr + i) < min){
            min = *(arr + i);
        }
    }
    printf("%ld %ld", sum - max, sum - min);
}

int main()
{
    char** arr_temp = split_string(readline());

    int* arr = malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        char* arr_item_endptr;
        char* arr_item_str = *(arr_temp + i);
        int arr_item = strtol(arr_item_str, &arr_item_endptr, 10);

        if (arr_item_endptr == arr_item_str || *arr_item_endptr != '\0') { exit(EXIT_FAILURE); }

        *(arr + i) = arr_item;
    }

    int arr_count = 5;

    miniMaxSum(arr_count, arr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
