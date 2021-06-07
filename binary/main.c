#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,n,a[20],ans=0,beg,end;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    beg=1;
    end=N;
    i=((beg+end)/2);
    while(beg<=end){
        if(a[i]==n){
            ans=i;
            break;
        }
        else if(a[i]>n){
            end=i-1;
        }
        else if(a[i]<n){
            beg=i+1;

        }
        i=((beg+end)/2);
    }
    if(ans>0){
        printf("%d",ans);
    }
    else{
        printf("not matched");
    }
    return 0;
}
