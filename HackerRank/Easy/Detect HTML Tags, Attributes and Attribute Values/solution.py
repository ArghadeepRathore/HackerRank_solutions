# HackerRank Problem: Detect HTML Tags, Attributes and Attribute Values
# Link: https://www.hackerrank.com/challenges/detect-html-tags-attributes-and-attribute-values/problem
# Difficulty: Easy
# Language: python3

from html.parser import HTMLParser

class MyHTMLParser(HTMLParser):
    
    def handle_starttag(self, tag, attrs):
        print(tag)
        for attr in attrs:
            print("->", attr[0], ">", attr[1])
    
    def handle_startendtag(self, tag, attrs):
        print(tag)
        for attr in attrs:
            print("->", attr[0], ">", attr[1])

parser = MyHTMLParser()

for _ in range(int(input())):
    parser.feed(input())
