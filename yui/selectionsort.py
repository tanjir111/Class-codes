n=int(input())
li=list(map(int,input().split()))
for i in range(n):
    min=i
    for j in range(i+1,n):
        if li[j]<li[min]:
            min=j
    Temp=li[i]
    li[i]=li[min]
    li[min]=Temp

print(li)