# HackerRank Problem: Maximize It!
# Link: https://www.hackerrank.com/challenges/maximize-it/problem
# Difficulty: Hard
# Language: python3

from itertools import product

K, M = map(int, input().split())

lists = []
for _ in range(K):
    data = list(map(int, input().split()))
    lists.append(data[1:])  # ignore first element (size)

max_value = 0

for combination in product(*lists):
    value = sum(x*x for x in combination) % M
    max_value = max(max_value, value)

print(max_value)
