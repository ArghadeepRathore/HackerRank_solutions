# HackerRank Problem: Any or All
# Link: https://www.hackerrank.com/challenges/any-or-all/problem
# Difficulty: Easy
# Language: python3

n = int(input())
arr = list(map(int, input().split()))

print(all(i > 0 for i in arr) and any(str(i) == str(i)[::-1] for i in arr))
