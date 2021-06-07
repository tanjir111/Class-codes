n=int(input())
lis=list(map(int,input().split()))
for i in range(1,n):
    temp=lis[i]
    j=i-1
    while (j>=0 and temp<lis[j]):
        lis[j+1]=lis[j]
        j-=1
        temp=lis[i+1]
        
print(lis)