# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())
for i in range(n):
    phone = input()
    if(' ' in phone):
        country, area, number = phone.split()
    elif('-' in phone):
        country, area, number = phone.split('-')
    print("CountryCode=" + country + ",LocalAreaCode=" + area + ",Number=" + number)