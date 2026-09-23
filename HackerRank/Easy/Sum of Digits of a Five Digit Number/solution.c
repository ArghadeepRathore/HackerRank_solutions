// HackerRank Problem: Sum of Digits of a Five Digit Number
// Link: https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem
// Difficulty: Easy
// Language: c

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int num, sum = 0;
    scanf("%d", &num);
    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }
    printf("%d", sum);
}
