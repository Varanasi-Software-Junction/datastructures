#include<stdio.h>
#include<stdlib.h>
typedef struct mynode{
int data;
struct mynode* left;
struct mynode* right;

}TreeNode;
void addNode(TreeNode** root,int data);
void preeorder(TreeNode* root);
void postorder(TreeNode* root);
void inorder(TreeNode* root);
int search(TreeNode* root,int data);
int main()
{
TreeNode *root = NULL;
int a[]={8,5,15,12,6,9},i;
int n=sizeof(a)/sizeof(int);
for(i=0;i<=n-1;i++)
addNode(&root,a[i]);
printf("\npree order\n");
preeorder(root);
printf("\npost order\n");
postorder(root);
printf("\nin order\n");
inorder(root);
printf("\n%d",search (root,15));
}
int search(TreeNode* root,int data)
{
    if(root==NULL)
    return 0;
    if(root->data==data)
    return 1;
    if(data<=root->data)
    return search(root->left,data);
    else 
    return search(root->right,data);
}
void addNode(TreeNode** root,int data)
{
    TreeNode* temp;
    if(*root == NULL)
    {
        temp=(TreeNode*)malloc(sizeof(TreeNode));
        temp->left=NULL;
        temp->right=NULL;
        temp->data=data;
        *root=temp;
        return;
    }
    if(data < (*root)->data)
    addNode(&(*root)->left,data);
    else
    addNode(&(*root)->right,data);
}
void preeorder(TreeNode* root)
{
    if(root == NULL)
    return;
    printf("%d,",root->data);
    preeorder(root->left);
    preeorder(root->right);
}
void postorder(TreeNode* root)
{
    if(root == NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    printf("%d,",root->data);
}
void inorder(TreeNode* root)
{
    if(root == NULL)
    return;
    inorder(root->left);
    printf("%d,",root->data);
    inorder(root->right);

}



