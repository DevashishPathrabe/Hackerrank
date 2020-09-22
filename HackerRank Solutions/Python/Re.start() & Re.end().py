# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
S = input()
k = input()
anymatch = 'No'
for m in re.finditer(r'(?=('+k+'))',S):
    anymatch = 'Yes'
    print((m.start(1),m.end(1)-1))
if anymatch == 'No':
    print((-1, -1))
