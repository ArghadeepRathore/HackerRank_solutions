# HackerRank Problem: Validating Credit Card Numbers
# Link: https://www.hackerrank.com/challenges/validating-credit-card-number/problem
# Difficulty: Medium
# Language: python3

import re

for _ in range(int(input())):
    card = input()
    
    # Check basic pattern (start + format)
    pattern = r'^[456]\d{3}(-?\d{4}){3}$'
    
    # Remove hyphens for repetition check
    clean = card.replace('-', '')
    
    if (re.match(pattern, card) and
        not re.search(r'(\d)\1{3,}', clean)):
        print("Valid")
    else:
        print("Invalid")
