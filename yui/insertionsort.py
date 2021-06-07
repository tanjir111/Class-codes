n=int(input())
li=list(map(int,input().split()))
for i in range(1,n):
    j=i-1
    while j>=0:
        if li[j]>li[j+1]:
            Temp=li[j+1]
            li[j+1]=li[j]
            li[j]=Temp
        j-=1
print(li)