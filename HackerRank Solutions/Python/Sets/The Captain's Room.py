K = int(input())
roomset = set()
roomlist = 0
for i in input().split():
    I = int(i)
    roomset.add(I)
    roomlist += I
print((sum(roomset)*K - roomlist)//(K-1))
