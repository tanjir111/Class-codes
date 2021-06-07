#include<stdio.h>
struct node
{
    int data;
    struct node *link;
} *head,*current,*temp;

int main()
{
    int i,n,M;
    scanf("%d",&n);
    temp=(struct node *)malloc(sizeof(struct node));
    temp->link=NULL;
    scanf("%d",&temp->data);
    head=temp;
    current=temp;

    for(i=2;i<=n;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->link=NULL;
        scanf("%d",&temp->data);
        current->link=temp;
        current=current->link;

    }

    M=head;
    for(current=head;current!=NULL;current=current->link)
    {
        if(current->data<M){
            M=current->data;
        }
    }
    printf("Minimum: %d",M);
    return 0;
}
