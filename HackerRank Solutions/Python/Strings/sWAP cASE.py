def change(s):
    if str.islower(s):
        return str.upper(s)
    else:
        return str.lower(s)
def swap_case(s):
    return ('').join(map(change,s))
if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)