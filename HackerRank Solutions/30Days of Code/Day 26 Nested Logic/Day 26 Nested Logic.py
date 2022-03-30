# Enter your code here. Read input from STDIN. Print output to STDOUT
dateActually, monthActually, yearActually = list(map(int, input().split()))
dateExpected, monthExpected, yearExpected = list(map(int, input().split()))
fine = 0
if (yearActually > yearExpected):
    fine = 10000
elif (yearActually == yearExpected):
    if (monthActually > monthExpected):
        fine = (monthActually - monthExpected) * 500
    elif (monthActually == monthExpected and dateActually > dateExpected):
        fine = (dateActually - dateExpected) * 15
print(fine)