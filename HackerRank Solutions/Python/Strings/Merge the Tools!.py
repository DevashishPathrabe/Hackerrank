def merge_the_tools(string, k):
    # your code goes here
    for i in range(0,len(string),k):
        a=string[i:i+k]
        result=str(a[0])
        for j in range (k):
            if a[j] not in result:
                result+=a[j]
        print(result)

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)