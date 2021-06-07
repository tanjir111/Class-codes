t=int(input())
for i in range(t):
    n,k=map(int,input().split())
    if n<=k:
        if k%n!=0:
            print(int(k/n)+1)
        else:
            print(int(k/n))
    if n>k:
        if n%k!=0:
            s=(k-(n%k))+n
            if s%n!=0:
                print(int(s/n)+1)
            else:
                print(int(s/n))
        else:
            print(1)