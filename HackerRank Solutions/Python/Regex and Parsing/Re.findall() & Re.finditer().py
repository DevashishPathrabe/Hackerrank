# Enter your code here. Read input from STDIN. Print output to STDOUT
import re

S = re.findall(r'(?<=[qwrtypsdfghjklzxcvbnm])([aeiou]{2,})(?=[qwrtypsdfghjklzxcvbnm])', input().strip(), re.IGNORECASE)
if(S):
    for i in S:
        print(i)
else:
    print(-1)