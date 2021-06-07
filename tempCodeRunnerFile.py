t=int(input())
for i in range(t):
    n,k=map(int,input().split())
    a=max(n,k)
    b=min(n,k)
    print((a%b)+(int(a/b)))