#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct mynode{
    int data;
    mynode* left;
    mynode* right;

} TreeNode;
void addNode(TreeNode** root,int data);
//Add a new node
void preOrder(TreeNode* root);
//Pre Order traversal
void inOrder(TreeNode* root);
//In Order traversal
void postOrder(TreeNode* root);
//Post Order traversal
void deleteNode(TreeNode** root,int data);
//Delete Node
int treeHeight(TreeNode* root);
//Find the tree height
int main()
{
   TreeNode* root=NULL;

    return 0;
}
void deleteNode(TreeNode** root,int data)
{
    
    TreeNode* rightnode;
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
    if(nodetodelete->left==NULL&& nodetodelete->right==NULL)
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
rightnode=nodetodelete->right;
*root=nodetodelete->left;
TreeNode* temp=*root;
while (temp->right!=NULL)
{
    temp=temp->left;
}
temp->right=rightnode;
}
void postOrder(TreeNode* root)//Post order traversal.  Left, right and node
{
    if(root==NULL)
    return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d,",root->data); 
}
void inOrder(TreeNode* root)//In order traversal.  Left, node and right
{
    if(root==NULL)
    return;
    inOrder(root->left);
    printf("%d,",root->data);    
    inOrder(root->right);
}
void preOrder(TreeNode* root)//Pre order traversal. Node, left and right
{
    if(root==NULL)
    return;
    printf("%d,",root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void addNode(TreeNode** root,int data)
{
    TreeNode* temp;//Temp pointer to hold the new node
    if(*root==NULL)//Root aka current pointer is null. Insert here
    {
        temp=(TreeNode*)malloc(sizeof(TreeNode));//Allocate memory for the node. It will always be a leaf node. So, set left and right to null
        temp->left=NULL;
        temp->right=NULL;
        temp->data=data;//Assign the data
        *root=temp;
        return;//Task done. End the function
    }
    if(data<=(*root)->data)
    {
        addNode(&(*root)->left,data);//New data is less than data at root. Go left
    }
    else //New data is more than data at root. Go right
    {
        addNode(&(*root)->right,data);
    }

}