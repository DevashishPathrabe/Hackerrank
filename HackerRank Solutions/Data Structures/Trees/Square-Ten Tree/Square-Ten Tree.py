# Enter your code here. Read input from STDIN. Print output to STDOUT
L = input()
R = input()
d = len(R)
level = 0
n = 1
tree = [n]
while d >= n + 1:
    tree.append(n)
    level += 1
    n = 2 ** level
def breakdown(N, k):
    if k == 0:
        return [int(N)]
    div = tree[k]
    chunks = breakdown(N[-div:], k - 1)
    chunks.append(N[:-div].lstrip('0') or 0)
    return chunks
divL = breakdown(L, level)
divR = breakdown(R, level)
seq = []
carry = 0
for k, n in enumerate(map(int, divL)):
    if k == 0:
        carry = -1
    n += carry
    carry = 0
    if k < level:
        if n > 0:
            n = 10 ** tree[k] - n
            carry = 1
        elif n < 0:
            n = 1
        seq.append((k, n))
if n != 0:
    divR[k] = int(divR[k]) - n
    while divR[-1] == 0:
        del divR[-1]
        n = seq.pop()[1]
        if n != 0:
            divR[-1] = int(divR[-1]) + n
seq.extend(reversed(list(enumerate(divR))))
seq = [s for s in seq if s[1] != 0]
print(len(seq))
for s in seq:
    print(*s)