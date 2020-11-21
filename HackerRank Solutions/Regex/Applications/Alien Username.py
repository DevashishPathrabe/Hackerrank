# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
print('\n'.join(['VALID' if(re.search('^[_.]\d+[a-zA-Z]*[_]?$', input())) else 'INVALID' for i in range(int(input()))]))