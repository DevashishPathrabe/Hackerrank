# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
expression = r"([A-Za-z0-9])\1+"
S = re.search(expression, input())
if(S):
    print(S.group(1))
else:
    print(-1)