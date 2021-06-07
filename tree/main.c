#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *leftchild;
    struct node *rightchild;
} *root, *parent, *current, *temp;

void pre_order_traversal(){
        if(current->data!=NULL){
            printf("%d ",current->data);
            current=current->leftchild;
            pre_order_traversal();
            current=current->rightchild;
            pre_order_traversal();
        }
}

int main()
{
    int i,n;
    scanf("%d",&n);
    temp=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->leftchild=NULL;
    temp->rightchild=NULL;
    root=temp;
    current=temp;
    parent=current;
    for(i=2;i<=n;i++){
        /*if(root==NULL){
            root=temp;
        }
        else{*/


        if(i%2==0){
            temp=(struct node *)malloc(sizeof(struct node));
            temp->leftchild=NULL;
            temp->rightchild=NULL;
            scanf("%d",&temp->data);

            //if(current==NULL){
            parent->leftchild=temp;
            current=current->leftchild;
            //printf("left child %d\n",parent->leftchild);
            //}
        }
        else{
            temp=(struct node *)malloc(sizeof(struct node));
            temp->leftchild=NULL;
            temp->rightchild=NULL;
            scanf("%d",&temp->data);
            //if(current==NULL){
            parent->rightchild=temp;
            current=current->rightchild;
            //printf("right child %d\n",parent->leftchild);
            //}
        }
    }
    current=root;
    pre_order_traversal();

    return 0;
}
