cube = lambda x: x**3# complete the lambda function 

def fibonacci(n):
    # return a list of fibonacci numbers
    initialList = []
    for i in range(n):
        if(i<2):
            initialList += [i]
        else:
            initialList += [initialList[-1] + initialList[-2]]
    return initialList
if __name__ == '__main__':
    n = int(input())
    print(list(map(cube, fibonacci(n))))