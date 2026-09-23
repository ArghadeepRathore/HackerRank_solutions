# HackerRank Problem: HTML Parser - Part 1
# Link: https://www.hackerrank.com/challenges/html-parser-part-1/problem
# Difficulty: Easy
# Language: python3

from html.parser import HTMLParser

class MyHTMLParser(HTMLParser):
    
    def handle_starttag(self, tag, attrs):
        print("Start :", tag)
        for attr in attrs:
            print("->", attr[0], ">", attr[1])
    
    def handle_endtag(self, tag):
        print("End   :", tag)
    
    def handle_startendtag(self, tag, attrs):
        print("Empty :", tag)
        for attr in attrs:
            print("->", attr[0], ">", attr[1])

parser = MyHTMLParser()

n = int(input())
for _ in range(n):
    parser.feed(input())
