#include <stdio.h>
#include <stdlib.h>
int c=-1,t=0,Queue[20],h=20;
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
        print("Queue is full");
    }
    else{
        int a;
        c++;
        scanf("%d",&a);
        Queue[c]=a;
    }
}
void pop(){
    if(c<t){
        printf("not possible");
    }
    else{
        t++;
        h++;
    }
}
void print(){
    int i;
    if(c<0){
        printf("Nothing\n");
    }
    else{
        for(i=t;i<=c;i++){
            printf("%d ",Queue[i]);
        }
        printf("\n");
    }
}
