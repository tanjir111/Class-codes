#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,j,Min;
    char arr[50],temp;
    scanf("%d",&N);
    scanf("%s",&arr);
    for(i=0;i<N;i++){
        Min=i;
        for(j=i+1;j<N;j++){
            if(arr[j]<arr[Min]){
                Min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[Min];
        arr[Min]=temp;
    }
    for(i=0;i<N;i++){
        printf("%c ",arr[i]);
    }
    return 0;
}
