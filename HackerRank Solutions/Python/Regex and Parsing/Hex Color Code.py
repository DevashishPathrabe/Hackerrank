# Enter your code here. Read input from STDIN. Print output to STDOUT
import re

N = int(input())
inCSS = False
for i in range(N):
    s = input()
    if('{' in s):
        inCSS = True
    elif('}' in s):
        inCSS = False
    elif(inCSS):
        for color in re.findall('#[0-9a-fA-F]{3,6}', s):
            print(color)