#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
}*head, *current, *temp;
int main()
{
    int i,n,p,d;
    scanf("%d",&n);
    temp=(struct node*)malloc(sizeof(struct node));
    temp->link=NULL;
    scanf("%d",&temp->data);
    head=temp;
    current=temp;
    for(i=1;i<n;i++){
        temp=(struct node*)malloc(sizeof(struct node));
        temp->link=NULL;
        scanf("%d",&temp->data);
        current->link=temp;
        current=current->link;
    }
    scanf("%d",&p);
    temp=(struct node *)malloc(sizeof(struct node));
    temp->link=NULL;
    temp->data=d;
    if(p==1){
        head=head->link;
    }
    else{
        current=head;
        for(i=1;i<=p-2;i++){
            current=current->link;
        }
        current->link=current->link->link;
    }
    for(current=head;current!=NULL;current=current->link)
    {
        printf("%d ",current->data);
    }
    return 0;
}
