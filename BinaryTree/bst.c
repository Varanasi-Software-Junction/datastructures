#include<stdio.h>
#include<stdlib.h>
typedef struct mynode
{
    int data;
    struct mynode* left;
    struct mynode* right;
}TreeNode;
void preOrder(TreeNode* root);
void inOrder(TreeNode* root);
void postOrder(TreeNode* root);
void addNode(TreeNode** root,int data);

int main()
{
TreeNode* root=NULL;
int a[]={8,4,5,33,2,6,-7};
int i,n;
n=sizeof(a)/sizeof(int);
for(int i=0;i<=n-1;i++)
addNode(&root,a[i]);
printf("\nPre Order\n");
preOrder(root);
printf("\nIn Order\n");
inOrder(root);
printf("\nPost Order\n");
postOrder(root);

    return 0;
}


void preOrder(TreeNode* root)
{
    if(root==NULL)
    return;
    printf("%d,",root->data);
    preOrder(root->left);
    preOrder(root->right);
    
}
void inOrder(TreeNode* root){
    if(root==NULL)
    return;
    inOrder(root->left);
    printf("%d,",root->data);
    inOrder(root->right);
    
}
void postOrder(TreeNode* root)
{
    if(root==NULL)
    return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d,",root->data);

}
void addNode(TreeNode** root,int data)
{
    TreeNode* temp;
if(*root==NULL)
{
temp=(TreeNode*)malloc(sizeof(TreeNode));
temp->left=NULL;
temp->right=NULL;
temp->data=data;
*root=temp;
return;
}
if(data<(*root)->data)
addNode(&(*root)->left,data);
else 
addNode(&(*root)->right,data);
}