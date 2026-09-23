# HackerRank Problem: HTML Parser - Part 2
# Link: https://www.hackerrank.com/challenges/html-parser-part-2/problem
# Difficulty: Easy
# Language: python3

from html.parser import HTMLParser

class MyHTMLParser(HTMLParser):
    
    def handle_comment(self, data):
        if '\n' in data:
            print(">>> Multi-line Comment")
        else:
            print(">>> Single-line Comment")
        
        print(data)
    
    def handle_data(self, data):
        if data.strip():  # ignore empty lines
            print(">>> Data")
            print(data)

parser = MyHTMLParser()

html = ""
for _ in range(int(input())):
    html += input() + '\n'

parser.feed(html)
