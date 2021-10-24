import sys
from collections import deque

def pred(a):
    if a == '*' or a == '/':
        return 3
    if a == '+' or a == '-':
        return 4
    if a == '&':
        return 8
    if a == '^':
        return 9
    if a == '|':
        return 10
    return sys.maxsize

def operand(char):
    return ('a'<=char<='z') or ('A'<=char<='Z') or ('0'<=char<='9')

def convert(op):
    postfix = ""
    s = []

    for i in op:
        if i == '(':
            s.append(i)
        elif i == ')':
            while s[-1] != '(':
                postfix+= s.pop()
            s.pop()
        elif operand(i):
            postfix+= i
        else:
            while s and pred(i)>=pred(s[-1]):
                postfix+=s.pop()
            
            s.append(i)
    
    while s:
        postfix+= s.pop()

    return postfix
if __name__ == '__main__':
 
    infix = "a+b*(c^d-e)^(f+g*h)-i"
    postfix = convert(infix)
    print(postfix)
