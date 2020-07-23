marksheet=[]
scorelist=[]

if __name__ == '__main__':
    for _ in range(int(input())):
        name = input()
        score = float(input())
        marksheet+=[[name,score]]
        scorelist+=[score]
    scoreMax = sorted(list(set(scorelist)))[1] 
    for n, s in sorted(marksheet):
        if s==scoreMax:
            print(n)
