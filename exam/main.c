#include <stdio.h>
int fibo[20];
int prime(int n,int i){
    int j=0;
    if(i<n){
        i++;
        if(n%i==0){
            j=1;
        }
        else{
            prime(n,i);
        }
    }
    return j;
}
void fibonacci(int i,int j,int n){
    int sum;
    sum=fibo[i]+fibo[j];
    i++;
    j++;
    fibo[j]=sum;
    if(j<n){
        fibo[j]=sum;
        fibonacci(i,j,n);
    }
}

int main()
{
    int i=1,n,j;
    scanf("%d",&n);
    j=prime(n,i);
    if(j==1){
        printf("Not prime\n");
    }
    else{
        printf("Prime\n");
    }
    fibo[0]=0;
    fibo[1]=1;
    fibonacci(0,1,n);
    for(i=0;i<n;i++){
        printf("%d ",fibo[i]);
    }
    return 0;
}
