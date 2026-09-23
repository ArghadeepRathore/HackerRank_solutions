// HackerRank Problem: Playing With Characters
// Link: https://www.hackerrank.com/challenges/playing-with-characters/problem
// Difficulty: Easy
// Language: c

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[24];
    char t[100];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c",t);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",t);
    return 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
