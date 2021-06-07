#include <stdio.h>
#include <stdlib.h>
int c=-1,stack[20],h=20;
void push();
void pop();
void print();
int main()
{
    int n;
    while(1){
        printf("Enter number(1-4)\n");
        scanf("%d",&n);
        if (n==1){
            push();
        }
        else if(n==2){
            pop();
        }
        else if(n==3){
            print();
        }
        else if(n==4){
            break;
        }
    }
    return 0;
}
void push(){
    if(c>=h){
        printf("Stack is full");
    }
    else{
        int a;
        c++;
        scanf("%d",&a);
        stack[c]=a;
    }
}
void pop(){
    if(c<0){
        printf("Not Possible\n");
    }
    else{
        c--;
    }
}
void print(){
    int i;
    for(i=c;i>=0;i--){
        printf("%d ",stack[i]);
    }
    printf("\n");
}
