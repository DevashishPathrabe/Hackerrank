# Enter your code here. Read input from STDIN. Print output to STDOUT
import re

text = '\n'.join(input() for i in range(int(input())))
for i in range(int(input())):
    s1 = input()
    s2 = s1.replace('our','or')
    print(len(re.findall(r"\b({}|{})\b".format(s1,s2),text)))