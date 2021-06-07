#include <stdio.h>
struct node{
    int data;
    struct node *rightchild;
    struct node *leftchild;
};
struct node *create(struct node *,int,int);
void Inorder(struct node *);
void Preorder(struct node *);
void Postorder(struct node *);

int main()
{
    struct node *root=NULL;
    int choice, item[20],n,i;
    do
    {
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            root=NULL;
            printf("enter the number of nodes:");
            scanf("%d",&n);

            for(i=1;i<=n;i++){
                scanf("%d",&item[i]);
                root=create(root,item[i],i);
            }
            break;
        case 2:
            Inorder(root);
            printf("\n");
            break;
        case 3:
            Preorder(root);
            printf("\n");
            break;
        case 4:
            Postorder(root);
            printf("\n");
            break;
        case 5:
            break;
        }
    }while(choice<5);
    return 0;
}
struct node *create(struct node *root, int item,int i){
    if(root==NULL){
        root=(struct node *)malloc(sizeof(struct node));
        root->leftchild=root->rightchild=NULL;
        root->data=item;
        return root;
    }
    else{
        if(i%2==0){
            root->leftchild=create(root->leftchild,item,i);
        }
        else{
            root->rightchild=create(root->rightchild,item,i);
        }
        return root;
    }
}
void Inorder(struct node *root){
    if(root!=NULL){
        Inorder(root->leftchild);
        printf("%d ",root->data);
        Inorder(root->rightchild);
    }

}
void Preorder(struct node *root){
    if(root!=NULL){
        printf("%d ",root->data);
        Preorder(root->leftchild);
        Preorder(root->rightchild);

    }

}
void Postorder(struct node *root){
    if(root!=NULL){
        Postorder(root->leftchild);
        Postorder(root->rightchild);
        printf("%d ",root->data);
    }

}
