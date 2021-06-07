#include <stdio.h>
#include <stdlib.h>
int factorial(int n){
    if(n>=1){
        return n*factorial(n-1);
    }
    else{
        return 1;
    }
}
int main()
{
    int n;
    printf("Enter positive intger: ");
    scanf("%d",&n);
    printf("Factorial is : %d\n",factorial(n));
    return 0;
}
