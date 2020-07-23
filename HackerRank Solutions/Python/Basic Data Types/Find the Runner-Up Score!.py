if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    newArr = []
    for i in range(n):
        if max(arr) != arr[i]:
            newArr.append(arr[i])
    print(max(newArr))