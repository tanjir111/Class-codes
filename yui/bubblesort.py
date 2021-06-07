n=int(input())
li=list(map(int,input().split()))
for i in range(n):
    j=0
    while j<(n-1-i):
        if li[j]>li[j+1]:
            p=li[j]
            li[j]=li[j+1]
            li[j+1]=p
        j+=1
print(li)