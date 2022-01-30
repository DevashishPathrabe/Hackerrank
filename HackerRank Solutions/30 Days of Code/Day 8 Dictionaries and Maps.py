# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())
phoneBook = dict()
for i in range(0, n):
    name, phoneNumber = input().split()
    phoneBook[name] = phoneNumber

for i in range(0, n):
    try:
        name = input()
        if name in phoneBook:
            print(f"{name}={phoneBook[name]}")
        else:
            print("Not found")
    except:
        break