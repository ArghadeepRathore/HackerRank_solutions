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
