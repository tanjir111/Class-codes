#include <stdio.h>
int main()
{
    int n,c,i,li[20];
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    li[0]=0;
    li[1]=1;
    for(c=2;c<n;c++){
        li[c]=li[c-1]+li[c-2];
    }
    for(i=0;i<n;i++){
        printf("%d ",li[i]);
    }

    return 0;
}
