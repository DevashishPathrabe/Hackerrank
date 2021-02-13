# Enter your code here. Read input from STDIN. Print output to STDOUT
import collections
n = int(input())
s = ','.join(input().split())
Student = collections.namedtuple('Student', s)

sum=0
for i in range(n):
    row = input().split()
    student = Student(*row)
    sum += int(student.MARKS)
print(sum/n)