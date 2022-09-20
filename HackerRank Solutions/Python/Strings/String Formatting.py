def print_formatted(number):
    # your code goes here
    for i in range(1,number + 1):
        pad = number.bit_length()
        print(f'{i:{pad}d} {i:{pad}o} {i:{pad}X} {i:{pad}b}')

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)