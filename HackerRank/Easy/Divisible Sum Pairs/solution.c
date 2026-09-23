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
