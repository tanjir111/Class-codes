#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N,i,n,a[20],ans=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    i=1;
    while(i<=N){
        if(a[i]==n){
            ans=i;
            break;
        }
        i+=1;
    }
    if(ans>0){
            printf("%d",ans);
    }
    else{
        printf("not matched");
    }
    return 0;
}
