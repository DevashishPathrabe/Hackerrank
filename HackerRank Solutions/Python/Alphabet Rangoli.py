def print_rangoli(size):
    # your code goes here
    alphabets = 'abcdefghijklmnopqrstuvwxyz'
    for i in range(size-1, -size, -1):
        temp = '-'.join(alphabets[size-1:abs(i):-1] + alphabets[abs(i):size])
        print(temp.center(4*size-3, '-'))
if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)