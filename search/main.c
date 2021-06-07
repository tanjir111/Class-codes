#include <stdio.h>
struct node
{
    int data;
    struct node *link;
}*head,*current,*temp;

int main()
{
    int i,n,R,ans=0;
    scanf("%d",&n);
    temp=(struct node *)malloc(sizeof(struct node));
    temp->link=NULL;
    scanf("%d",&temp->data);
    head=temp;
    current=head;
    for(i=2;i<=n;i++){
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
    scanf("%d",&R);
    current=head;
    while(current!=NULL){
        if(current->data==R){
            ans++;
            break;
        }
        current=current->link;

    }
    if(ans>0){
        printf("found");
    }
    else{
        printf("not found");
    }
    return 0;
}
