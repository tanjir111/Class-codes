T=int(input())
for i in range(T):
    A,B=map(int,input().split())
    i=2
    s=0
    z=A*B*i
    while z<10000000000000000000:
        for j in range(A+1,B*i):
            x=A*j
            for k in range(A+1,B*i):
                y=A*k
                if(z==(A*j)+(A*k)):
                    print(x,y,z)
                    s=1
                    break
            if(s==1):
                break
        if(s==1):
            break
        else:
            Z=A*B*(i+1)
