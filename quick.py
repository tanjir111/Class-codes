
def quicksort(li,left,right):
    if left<right:
        q=partition(li,left,right)
        quicksort(li,left,q-1)
        quicksort(li,q+1,right)
    return li
def partition(li,left,right):
    x=li[right]
    i=left-1
    for j in range(left,right):
        if li[j]<=x:
            i+=1
            li[i],li[j]=li[j],li[i]
    li[i+1],li[right]=li[right],li[i+1]
    return (i+1)
n=int(input())
li=list(map(int,input().split()))
quicksort(li,0,n-1)
print(li)