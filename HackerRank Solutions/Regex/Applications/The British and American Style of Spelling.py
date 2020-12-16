# Enter your code here. Read input from STDIN. Print output to STDOUT
import re

str = ' '.join([input() for i in range(int(input()))])
for i in range(int(input())):
    print(len(re.findall(input()[:-2]+'[zs]e', str)))