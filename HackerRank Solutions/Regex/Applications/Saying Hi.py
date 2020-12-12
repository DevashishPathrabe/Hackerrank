# Enter your code here. Read input from STDIN. Print output to STDOUT
import re

n = int(input())
for i in range(n):
    string = input()
    if(re.search(r'^[Hh][Ii]\s[^Dd]', string)):
        print(string)