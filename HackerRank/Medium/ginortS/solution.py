# HackerRank Problem: ginortS
# Link: https://www.hackerrank.com/challenges/ginorts/problem
# Difficulty: Medium
# Language: python3

S = input()

lower = sorted([c for c in S if c.islower()])
upper = sorted([c for c in S if c.isupper()])
odd = sorted([c for c in S if c.isdigit() and int(c) % 2 != 0])
even = sorted([c for c in S if c.isdigit() and int(c) % 2 == 0])

print("".join(lower + upper + odd + even))
