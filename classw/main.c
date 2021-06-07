#include <stdio.h>
#include <stdlib.h>
char input[20];
int n,c=-1,stack[100];
void push(char a);
int main()
{
    int i;
    scanf("%s",&input);
    n=strlen(input);
    for(i=0;i<n;i++){
        if(input[i]>='0' && input[i]<'10'){
            push(input[i]);
        }
        else if(input[i]=='+'){
            if(c<1){
                printf("not possible");
            }
            else{
                stack[c-1]=stack[c-1]+stack[c];
                c--;
            }
        }
        else if(input[i]=='-'){
            if(c<1){
                printf("not possible");
            }
            else{
                stack[c-1]=stack[c-1]-stack[c];
                c--;
            }
        }
        else if(input[i]=='*'){
            if(c<1){
                printf("not possible");
            }
            else{
                stack[c-1]=stack[c]*stack[c-1];
                c--;
            }
        }
        else if(input[i]=='/'){
            if(c<1){
                printf("not possible");
            }
            else{
                stack[c-1]=stack[c]/stack[c-1];
                c--;
            }
        }
    }
    printf("%d",stack[c]);
    return 0;
}
void push(char a){
    c++;
    int b;
    b=a;
    stack[c]=b-48;
}
