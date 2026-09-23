# HackerRank Problem: Validating UID 
# Link: https://www.hackerrank.com/challenges/validating-uid/problem
# Difficulty: Easy
# Language: python3

import re

for _ in range(int(input())):
    uid = input()
    
    if (len(uid) == 10 and
        re.search(r'[A-Z].*[A-Z]', uid) and
        re.search(r'\d.*\d.*\d', uid) and
        re.match(r'^[a-zA-Z0-9]+$', uid) and
        len(set(uid)) == 10):
        print("Valid")
    else:
        print("Invalid")
