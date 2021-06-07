#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,li[20],temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&li[i]);
    }
    for(i=1;i<=n;i++){
        temp=li[i];
        j=i-1;
        while(j>0 && temp<li[j]){
            li[j+1]=li[j];
            j--;
        }
        li[j+1]=temp;
    }
    for(i=1;i<=n;i++){
        printf("%d ",li[i]);
    }
    return 0;
}
