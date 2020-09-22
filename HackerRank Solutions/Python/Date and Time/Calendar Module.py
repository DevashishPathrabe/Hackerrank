# Enter your code here. Read input from STDIN. Print output to STDOUT
import calendar
day = {0:'MONDAY', 1:'TUESDAY', 2:'WEDNESDAY', 3:'THURSDAY', 4:'FRIDAY', 5:'SATURDAY', 6:'SUNDAY'}
m,d,y = map(int,input().split())
print (day[calendar.weekday(y,m,d)])