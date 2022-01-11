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
void deleteNode(TreeNode** root,int data);
int search(TreeNode* root,int data);
int count(TreeNode* root);
int maxvalue(int x,int y);
int treeheight(TreeNode* root);
int main()
{
TreeNode *root = NULL;
int a[]={8,9,7,10,12},i;
int n=sizeof(a)/sizeof(int);
for(i=0;i<=n-1;i++)
addNode(&root,a[i]);
printf("\npree order\n");
preeorder(root);
printf("\npost order\n");
postorder(root);
printf("\nin order\n");
inorder(root);
printf("\n serch=%d",search (root,15));
printf("\nHeight=%d",treeheight(root));
printf("\ncount=%d",count(root));
deleteNode(root,8);
  
}
int maxvalue(int x,int y)
{
    if(x>y)
    return x;
    else
    return y;
    
}
int treeheight(TreeNode* root)
{
    if(root==NULL)
    return 0;
    else
    return 1 + maxvalue(treeheight(root->left),treeheight(root->right));
}
int count(TreeNode* root)
{
    if(root==NULL)
    return 0;
    else
    return 1 + count(root->left)+count(root->right);
   
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

void deleteNode(TreeNode** root,int data)
{
    TreeNode* rightNode;
    TreeNode* nodetodelete;


    if(*root==NULL)
    return;


    if(data<(*root)->data)
    {
        deleteNode(&(*root)->left,data);
        return;
    }
    if(data>(*root)->data)
    {
        deleteNode(&(*root)->right,data);
        return;
    }


    nodetodelete=*root;
    if(nodetodelete->left==NULL && nodetodelete->right==NULL)
    {
        *root=NULL;
        free(nodetodelete);
        return;
    }
        if(nodetodelete->left==NULL)
        {
            *root=nodetodelete->right;
            free(nodetodelete);
            return;
        }
        if(nodetodelete->right==NULL)
        {
            *root=nodetodelete->left;
            free(nodetodelete);
            return;
        }
        rightNode=nodetodelete->right;
        *root=nodetodelete->left;
        TreeNode* temp=*root;
        while(temp->right!=NULL)
        {
            temp=temp->right;
        }
        temp->right=rightNode;
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



