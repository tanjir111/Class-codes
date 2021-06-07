#include <stdio.h>
int user_nusrat(int n){
    n=n+7;
    return n;
}
int user_mehedi(int x){
    x=x-1;
    return x;
}
int prime(int n){
    int i,p=1;
    for(i=2;i<=n/2;i++){
        if (n%i==0){
            p=0;
        }
    }
    return p;

}
int main()
{
    int num,c;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    printf("Factorial %d\n",user_nusrat(num));
    printf("Factorial %d\n",user_mehedi(num));
    c=prime(num);
    if(c==0){
        printf("Not prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}
