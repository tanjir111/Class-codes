#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,arr[50],j,Min,temp,list[50],s,k;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N-1;i++){
        Min=arr[i];
        for(j=i+1;j<N;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }
    j=0;
    for(i=0;i<N;i++){
        if(arr[i]!=arr[i+1]){
            list[j]=arr[i];
            j++;
        }
    }

    for(i=0;i<j;i++){
            s=0;
        for(k=0;k<N;k++){
            if(list[i]==arr[k]){
                s++;
            }
        }
        printf("%d = %d\n",list[i],s);
    }
    return 0;
}
