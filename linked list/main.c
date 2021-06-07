#include<stdio.h>
struct node
{
    int data;
    struct node *link;
} *head,*current,*temp;

int main()
{
    int i,n;
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
    for(current=head;current!=NULL;current=current->link)
    {
        printf("%d ",current->data);
    }
}
