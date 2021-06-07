
T=int(input())
for i in range(1,T+1):
    N=int(input())
    L= list(map(int,input().split()))
    R=0
    for j in range(N-1):
        k=L.index(min(L[j:N]))
        L[j:k+1]=sorted(L[j:k+1])
        R+=(k-j+1)
    print("Case #%d:"%(i),R)
        
    