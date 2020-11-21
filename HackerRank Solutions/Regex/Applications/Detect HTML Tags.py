# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
import sys
print(';'.join(sorted(set(re.findall('<(\w+)', sys.stdin.read())))))